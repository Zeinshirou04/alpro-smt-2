#include "header.h"

int main() {
	cout << "Luas persegi dengan sisi = 5 adalah " << luas_persegi(5) << endl;
	is_besar(5);
	cout << "Angka 5 adalah ganjil bersifat = " << is_ganjil(5) << endl;
	cout << "Angka 6 adalah genap bersifat = " << is_genap(6) << endl;
	cout << "Nilai positif 4 adalah " << toPositive(4) << endl;
	cout << "Nilai negatif -5 adalah " << toNegative(-5) << endl;
	return 0;
}