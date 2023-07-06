#include <iostream>

using namespace std;

int main() {
	int sukuAkhir, sukuAwal, sum = 0;
	cout << "\nMasukkan nilai Suku Awal : ";
	cin >> sukuAwal;
	sum = sukuAwal;
	cout << "Masukkan nilai Suku Akhir : ";
	cin >> sukuAkhir;
	for (;;) {
		cout << sukuAwal << "\t";
		sukuAwal++;
		if (sukuAwal > sukuAkhir) {
			break;
		}
		sum = sum + sukuAwal;
	}
	cout << "\nHasil penjumlahan : " << sum << endl;
	return 0;
}