#include <iostream>

using namespace std;

int main() {
	int sukuAkhir, sukuAwal;
	cout << "Masukkan nilai Suku Awal : ";
	cin >> sukuAwal;
	cout << "Masukkan nilai Suku Akhir : ";
	cin >> sukuAkhir;
	for (;;) {
		cout << sukuAwal << "\t";
		sukuAwal--;
		if (sukuAwal < sukuAkhir) {
			break;
		}
	}
	return 0;
}
