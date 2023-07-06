#include "header.h"

void menu() {
	cout << endl << "Halo, Siapkan Biaya parkir anda sesuai data berikut" << endl;
	cout << "Kode | Tipe Kendaraan | Biaya per jam" << endl;
	cout << "1. | Sepeda (Biasa, Motor, Listrik), Tossa | Rp. 3.000,-" << endl;
	cout << "2. | Mobil | Rp. 5.000,-" << endl;
	cout << "3. | Segala jenis Truck dan Bis | Rp. 25.000,-" << endl << endl;
	int kode = inputKode(), fee = checkHour(kode), price = parkPrice(kode);
	int totalPrice = fee + price;
	cout << "Total biaya parkir anda adalah Rp. " << totalPrice << ",-" << endl;
}

int inputKode() {
	int kode;
	cout << "Masukkan kode : ";
	cin >> kode;
	if (kode > 3) {
		cout << "Kode anda tidak valid! Silahkan input ulang." << endl;
		inputKode();
	}
	return kode;
}

int checkHour(int kode) {
	int hour, fee;
	cout << "Berapa lama anda parkir? ";
	cin >> hour;
	if (kode == 1) {
		if (hour > 12) {
			cout << "Karena anda lebih dari 12 jam, dikenakan biaya tambahan sebesar Rp. 50.000,-" << endl;
			return 50000;	
		}
		return 0;
	} else if (kode == 2) {
		if (hour > 12) {
			cout << "Karena anda lebih dari 12 jam, dikenakan biaya tambahan sebesar Rp. 75.000,-" << endl;
			return 75000;	
		}
		return 0;
	} else if (kode == 3) {
		if (hour > 8) {
			cout << "Karena anda lebih dari 8 jam, dikenakan biaya tambahan sebesar Rp. 250.000,-" << endl;
			return 250000;	
		}
		return 0;
	}
	return 0;
}

int parkPrice(int kode) {
	if (kode == 1) {
		return 3000;
	} else if (kode == 2) {
		return 5000;
	} else if (kode == 3) {
		return 25000;
	}
	return 0;
}
