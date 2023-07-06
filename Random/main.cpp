#include <iostream>
using namespace std;

class Anak
{
    public:
    string nama;
    int usia;
    string kelompok;
    string guru;

    // dummy
    Anak(){

    }

    Anak(string n, int u)
    {
        nama = n;
        usia = u;
        
        if((usia>=2)&&(usia<=3)){
            kelompok = "PRA KB";
            guru = "Bu Ida";
        }
        else if((usia>=4)&&(usia<=5)){
            kelompok = "KB";
            guru = "Bu Nissa";
        }
        else if(usia==6){
            kelompok = "TK";
            guru = "Bu Ningsih";
        }
        else{
            cout << "Usia tidak sesuai" << endl;
        }
    }

    void tampilData(Anak *a, int n, string kel)
    {
        for(int i=0; i<n; i++){
            if(a[i].kelompok == kel){
                cout << a[i].nama << "\t" << a[i].kelompok << "\t" << a[i].guru;
                cout << endl;
            }
        }
    }

    void cariData(Anak *a, int n, string nam)
    {
        int i;
        for(i=0; i<n; i++){
            if(a[i].nama == nam){
                cout << a[i].nama << "\t" << a[i].kelompok << "\t" << a[i].guru;
                cout << endl;
                break;
            }
        }
        if(i>=n){
            cout << "Maaf, data Anak tidak ada." << endl;
        }
    }
};

int main(){
    
    int n;
    string nama_input;
    int usia_input;
    cout << "Input n: "; cin >> n;

    Anak *an = new Anak[n];

    for(int i=0; i<n; i++){
        cout << "Input nama: "; getline(cin >> ws, nama_input);
        cout << "Input usia: "; cin >> usia_input;
        cout << endl;

        an[i] = Anak(nama_input, usia_input);
    }

    char option;
    do{
        cout << "Pilih (1. Tampil Data, 2. Cari Data, 0. Exit): "; cin >> option;

        if(option == '1'){
            string kel;
            cout << "Input kelompok (Caps Lock): "; getline(cin >> ws, kel);

            Anak data;
            data.tampilData(an, n, kel);
        }
        else if(option == '2'){
            string nam;
            cout << "Cari data anak (nama):"; getline(cin >> ws, nam);

            Anak data;
            data.cariData(an, n, nam);
        }
        else if(option == '0'){
            break;
        }
        else{
            cout << "Input salah!!" << endl;
        }
    }while(option != '0');


    return 0;
}