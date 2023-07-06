#include <iostream>

using namespace std;

int main() {
	string jenisKendaraan;
	int jam;
	cout << "\nApa Tipe Kendaraan anda (Contoh: SepedaMotor, MiniBus, Bus)? ";
	cin >> jenisKendaraan;
	cout << "Berapa lama anda telah memarkirkan kendaraan anda? ";
	cin >> jam;
	if ((jenisKendaraan == "SepedaMotor") || (jenisKendaraan == "SepedaListrik") || (jenisKendaraan == "Tossa") || (jenisKendaraan == "Sepeda")) {
		cout << "Biaya parkir anda adalah Rp. 3.000,-" << endl;
		if (jam >= 12) {
			cout << "Karena waktu parkir anda melebihi 12 Jam, maka ada penambahan harga sebesar Rp. 50.000,-" << endl;
		}
	} else if (jenisKendaraan == "Mobil") {
		cout << "Biaya parkir anda adalah Rp. 5.000,-" << endl;
		if (jam >= 12) {
			cout << "Karena waktu parkir anda melebihi 12 Jam, maka ada penambahan harga sebesar Rp. 75.000,-" << endl;
		}
	} else if ((jenisKendaraan == "MiniTruck") || (jenisKendaraan == "Truck") || (jenisKendaraan == "MiniBus") || (jenisKendaraan == "Bus")) {
		cout << "Biaya parkir anda adalah Rp. 25.000,-" << endl;
		if (jam >= 8) {
			cout << "Karena waktu parkir anda melebihi 12 Jam, maka ada penambahan harga sebesar Rp. 250.000,-" << endl;
		}
	}
	return 0;
}
