#include "header.h"

Belma::Belma() {}

Belma::Belma(int count, string nama, int umur) {
    if(count > length) {
        cout << "Diluar jangkauan" << endl;
    } else {
        Belma::data[count].nama = nama;  
        Belma::data[count].umur = umur;
        if((Belma::data[count].umur >= 2) && (Belma::data[count].umur <= 3)) {
            Belma::data[count].kelompok = "PRA KB";
            Belma::data[count].pembimbing = "Bu Ida";
        } else if((Belma::data[count].umur >= 4) && (Belma::data[count].umur <= 5)) {
            Belma::data[count].kelompok = "KB";
            Belma::data[count].pembimbing = "Bu Nissa";
        } else if(Belma::data[count].umur >= 6) {
            Belma::data[count].kelompok = "TK";
            Belma::data[count].pembimbing = "Bu Ningsih";
        } 
    }
}

void Belma::tampilData(string kelompok) {
    for(int i = 0; i < length; i++) {
        if(Belma::data[i].kelompok == kelompok) {
            cout << "Ananda " << Belma::data[i].nama << endl;
            cout << "Kelompok: " << Belma::data[i].kelompok << endl;
            cout << "Pembimbing: " << endl;
        }
    }
}

void Belma::cariData(string nama) {
    for(int i = 0; i < length; i++) {
        if(Belma::data[i].nama == nama) {
            cout << "Ananda " << Belma::data[i].nama << endl;
            cout << "Umur: " << Belma::data[i].umur << endl;
            cout << "Kelompok: " << Belma::data[i].kelompok << endl;
            cout << "Pembimbing: " << endl;
            break;
        }
    }
    cout << "Maaf, data anak anda tidak ditemukan" << endl;
}