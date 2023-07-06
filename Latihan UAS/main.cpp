#include "header.h"

int main() {
    // Deklarasi Variabel
    Belma belma = Belma();
    string nama, kelompok;
    char dec;
    bool opt;
    int umur, len;

    // Input value
    cout << "Masukkan jumlah data yang diinginkan :"; cin >> len;
    #define length len

    // Define Array
    // Belma *belma = new Belma[length];

    for(int i = 0; i < length; i++) {
        cout << "Masukkan nama : "; cin >> nama;
        cout << "Masukkan umur : "; cin >> umur;
        Belma(i, nama, umur);
    }

    // Extensional
    opt = true;
    cout << "Ingin menampilkan data (y/n)? "; cin >> dec;
    dec == 'y' ? opt = true : opt = false;
    while(opt) {
        cout << "Masukkan kelompok : "; getline(cin >> ws, kelompok);
        belma.tampilData(kelompok);
        cout << endl;
        cout << "Apakah ingin menampilkan lagi (y/n)? "; cin >> dec;
        dec == 'y' ? opt = true : opt = false;
    }

    opt = true;
    cout << "Ingin mencari data (y/n)? "; cin >> dec;
    dec == 'y' ? opt = true : opt = false;
    while(opt) {
        cout << "Masukkan nama : "; cin >> nama;
        belma.cariData(nama);
        cout << endl;
        cout << "Apakah ingin mencari data lagi (y/n)? "; cin >> dec;
        dec == 'y' ? opt = true : opt = false;
    }

    return 0;
}