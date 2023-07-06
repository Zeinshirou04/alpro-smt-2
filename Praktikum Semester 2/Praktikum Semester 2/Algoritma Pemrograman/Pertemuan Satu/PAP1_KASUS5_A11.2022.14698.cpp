#include <iostream>

using namespace std;

int main() {
	int nilai;
	cout << "\nBerapa nilai anda? ";
	cin >> nilai;
	if (nilai >= 85) {
		cout << "Nilai anda adalah A\n";
	} else if ((nilai < 85) && (nilai >= 80)) {
		cout << "Nilai anda adalah AB\n";
	} else if ((nilai < 80) && (nilai >= 70)) {
		cout << "Nilai anda adalah B\n";
	} else if ((nilai < 70) && (nilai >= 65)) {
		cout << "Nilai anda adalah BC\n";
	} else if ((nilai < 65) && (nilai >= 60)) {
		cout << "Nilai anda adalah C\n";
	} else if ((nilai < 60) && (nilai >= 50)) {
		cout << "Nilai anda adalah D\n";
	} else if ((nilai < 50) && (nilai >= 0)) {
		cout << "Nilai anda adalah E\n";
	} else {
		cout << "Nilai anda tidak terdifinisi\n";
	}
	return 0;
}