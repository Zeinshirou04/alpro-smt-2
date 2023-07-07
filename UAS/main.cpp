#include <iostream>

using namespace std;

int main() {
    // Deklarasi Variabel

    // ID Siswa
    int id_siswa;

    // Nilai Tugas, Nilai UTS, Nilai UAS
    float nilai_tugas, nilai_uts, nilai_uas;

    // Nama
    string nama;

    // Meminta untuk memasukkan data
    // ID Siswa
    cout << "Masukkan ID Siswa : "; cin >> id_siswa;
    cout << "Masukkan Nama siswa : "; getline(cin >> ws, nama);
    cout << "Masukkan Nilai Tugas : "; cin >> nilai_tugas;
    cout << "Masukkan Nilai UTS : "; cin >> nilai_uts;
    cout << "Masukkan Nilai UAS : "; cin >> nilai_uas;

    if((nilai_uts < 60.0) && (nilai_uas < 60.0)) {
        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
        cout << "Review 5 Jurnal Internasional" << endl;
    } else if(nilai_uts < 60.0) {
        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
        cout << "Review 2 Buku" << endl;
    } else if(nilai_uas < 60) {
        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
        cout << "Review 3 Jurnal" << endl;
    }

    return 0;
}