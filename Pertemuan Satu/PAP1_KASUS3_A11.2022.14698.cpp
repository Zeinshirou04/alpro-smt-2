#include <iostream>

using namespace std;

int main() {
	int sukuAkhir, sukuAwal, incVal;
	cout << "Masukkan nilai Suku Awal : ";
	cin >> sukuAwal;
	cout << "Masukkan nilai Suku Akhir : ";
	cin >> sukuAkhir;
	cout << "Masukkan Beda/Increment Value : ";
	cin >> incVal;
	for (;;) {
		cout << sukuAwal << "\t";
		sukuAwal += incVal;
		if (sukuAwal > sukuAkhir) {
			break;
		}
	}
	return 0;
}
