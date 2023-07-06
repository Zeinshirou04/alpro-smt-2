#include "header.h"

class mobil{
    //acces specifier
    public:
    string nama;
    int tahun;
};

int main() {
/* 
persegiPanjang nilai1;
    lingkaran nilai2;

    nilai1.p = 2;
    nilai1.l = 4;

    nilai2.jari = 2;
    nilai2.phi = 3.14;

    persegiPanjang persegi = luasPersegi(nilai1);
    lingkaran lingkaran = luasLingkaran(nilai2);


    cout << "Luas Persegi adalah : " << persegi.luas << endl;
    cout << "Luas Lingkaran adalah : " << lingkaran.luas << endl;

*/
    // mobil mobilku;

    // mobilku.nama ="Lamborgini";
    // cout << mobilku.nama << endl;

    int usia, tahun;
    string nim, nama, judul, penerbit;

    Mahasiswa mhs;
    Buku buku;

    cout << "Masukkan NIM anda : ";
    cin >> nim;
    mhs.setNim(nim);
    cout << "Masukkan Nama anda : ";
    cin >> nama;
    mhs.setNama(nama);
    cout << "Masukkan Usia anda : ";
    cin >> usia;
    mhs.setUsia(usia);

    cout << "Masukkan Judul anda : ";
    cin >> judul;
    buku.setJudul(judul);
    cout << "Masukkan Penerbit anda : ";
    cin >> penerbit;
    buku.setPenerbit(penerbit);
    cout << "Masukkan Tahun anda : ";
    cin >> tahun;
    buku.setTahun(tahun);

    cout << "NIM anda : " << mhs.nim << endl;
    cout << "Nama anda : " << mhs.nama << endl;
    cout << "Usia anda : " << mhs.usia << endl;

    cout << "Judul anda : " << buku.judul << endl;
    cout << "Penerbit anda : " << buku.penerbit << endl;
    cout << "Tahun anda : " << buku.tahun << endl;

    return 0;
}