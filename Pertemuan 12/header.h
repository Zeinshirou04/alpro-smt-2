#include <iostream>
#include <cmath>

using namespace std;

struct persegiPanjang {
    int p;
    int l;
    int luas;
};

struct lingkaran {
    int jari;
    float phi;
    float luas;
};

class Mahasiswa {
    public:
        string nim;
        string nama;
        int usia;

        string setNim(string);
        string setNama(string);
        int setUsia(int);
};

class Buku {
    public:
        string judul;
        int tahun;
        string penerbit;

        string setJudul(string);
        string setPenerbit(string);
        int setTahun(int);
};

persegiPanjang luasPersegi(persegiPanjang);
lingkaran luasLingkaran(lingkaran);