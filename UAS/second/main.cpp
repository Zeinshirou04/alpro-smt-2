#include <iostream>

using namespace std;


/*

    Nama: Farras Adhani Zayn
    NIM : A11.2022.14698
    Kelompok : A11.4218

*/

class Smart {
    // Deklarasi Variabel

    // Public
    public:
        // ID Siswa
        int id_siswa;

        // Nilai Tugas, Nilai UTS, Nilai UAS
        float nilai_tugas, nilai_uts, nilai_uas;

        // Nama
        string nama;

        // Dummy Constructor to avoid Main Constructor
        Smart() {}

        // Main Constructor used to input data
        Smart(int id_siswa, string nama, float nilai_tugas, float nilai_uts, float nilai_uas) {
            Smart::id_siswa = id_siswa;
            Smart::nama = nama;
            Smart::nilai_tugas = nilai_tugas;
            Smart::nilai_uts = nilai_uts;
            Smart::nilai_uas = nilai_uas; 
        };

        // Method tampilData
        void tampilData(string nama, Smart *data, int length) {
            cout << endl;
            for(int i = 0; i < length; i++) {
                if(data[i].nama == nama) {
                    cout << "Data ditemukan!" << endl;
                    cout << "ID Siswa : " << data[i].id_siswa << endl;
                    cout << "Nama : " << data[i].nama << endl;
                    cout << "Nilai Tugas : " << data[i].nilai_tugas << endl;
                    cout << "Nilai UTS : " << data[i].nilai_uts << endl;
                    cout << "Nilai UAS : " << data[i].nilai_uas << endl;
                    if((data[i].nilai_uts < 60.0) && (data[i].nilai_uas < 60.0)) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 5 Jurnal Internasional" << endl;
                    } else if(data[i].nilai_uts < 60.0) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 2 Buku" << endl;
                    } else if(data[i].nilai_uas < 60) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 3 Jurnal" << endl;
                    }
                    cout << endl;
                }
            }
        }

        // Method cariData
        int cariData(int id_siswa, Smart *data, int length) {
            cout << endl;
            for(int i = 0; i < length; i++) {
                if(data[i].id_siswa == id_siswa) {
                    cout << "Data ditemukan!" << endl;
                    cout << "ID Siswa : " << data[i].id_siswa << endl;
                    cout << "Nama : " << data[i].nama << endl;
                    cout << "Nilai Tugas : " << data[i].nilai_tugas << endl;
                    cout << "Nilai UTS : " << data[i].nilai_uts << endl;
                    cout << "Nilai UAS : " << data[i].nilai_uas << endl;
                    if((data[i].nilai_uts < 60.0) && (data[i].nilai_uas < 60.0)) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 5 Jurnal Internasional" << endl;
                    } else if(data[i].nilai_uts < 60.0) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 2 Buku" << endl;
                    } else if(data[i].nilai_uas < 60) {
                        cout << "Model Remidi yang anda dapatkan adalah : " << endl;
                        cout << "Review 3 Jurnal" << endl;
                    } 
                    cout << endl;
                    return 1;
                }
            }
            cout << "Maaf, data tidak ada!" << endl;
            return 1;
        }
        
};

int main() {
    // Deklarasi Variabel

    // ID Siswa, length
    int id_siswa, length;

    // Option
    char opt;

    // Decision
    bool dec = false;

    // Nilai Tugas, Nilai UTS, Nilai UAS
    float nilai_tugas, nilai_uts, nilai_uas;

    // Nama
    string nama;

    // Meminta untuk memasukkan banyak data
    cout << "Masukkan banyak data : "; cin >> length;

    // Deklarasi array Class Smart
    Smart *siswa = new Smart[length];

    // Deklarasi class Smart
    Smart smart;

    // Meminta untuk memasukkan data
    for(int i = 0; i < length; i++) {
        // ID Siswa
        cout << "Masukkan ID Siswa : "; cin >> id_siswa;
        // Nama Siswa
        cout << "Masukkan Nama siswa : "; cin >> nama;
        // Nilai Tugas
        cout << "Masukkan Nilai Tugas : "; cin >> nilai_tugas;
        // Nilai UTS
        cout << "Masukkan Nilai UTS : "; cin >> nilai_uts;
        // Nilai UAS
        cout << "Masukkan Nilai UAS : "; cin >> nilai_uas;

        // Memanggil Constructor class untuk input data
        siswa[i] = Smart(id_siswa, nama, nilai_tugas, nilai_uts, nilai_uas);
    }

    cout << "Lanjutkan? (S = Tampilkan data | F = Cari Data | N = Exit) "; cin >> opt;
    opt == 'S' || 'F' ? dec = true : dec = false;
    opt == 'N' ? dec = false : dec = true;
    while(dec) {
        // Kondisi show data atau menampilkan data
        if(opt == 'S') {
            cout << "Masukkan nama siswa yang ingin ditampilkan : "; cin >> nama;
            smart.tampilData(nama, siswa, length);
        } else if(opt == 'F') { // Kondisi find data atau mencari data
            cout << "Masukkan ID siswa yang ingin dicari : "; cin >> id_siswa;
            smart.cariData(id_siswa, siswa, length);
        }
        cout << "Lanjutkan? (S = Tampilkan data | F = Cari Data | N = Exit) "; cin >> opt;
        opt == 'S' || 'F' ? dec = true : dec = false;
        opt == 'N' ? dec = false : dec = true;
    }

    return 0;
}