#include "header.h"

persegiPanjang luasPersegi(persegiPanjang data) {
    data.luas = data.p * data.l;

    return data; 
}

lingkaran luasLingkaran(lingkaran data) {
    data.luas = data.phi * pow(data.jari, 2);

    return data; 
}

string Mahasiswa::setNim(string nim) {
    return Mahasiswa::nim = nim;
}

string Mahasiswa::setNama(string nama) {
    return Mahasiswa::nama = nama;
}

int Mahasiswa::setUsia(int usia) {
    return Mahasiswa::usia = usia;
}

string Buku::setJudul(string judul) {
    return Buku::judul = judul;
}

string Buku::setPenerbit(string penerbit) {
    return Buku::penerbit = penerbit;
}

int Buku::setTahun(int tahun) {
    return Buku::tahun = tahun;
}