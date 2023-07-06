#include "header.h"

int main() {
	int n;
	cout << endl << "Masukkan Bilangan yang akan dikuadratkan : ";
	cin >> n;

	// Call function
	cout << "Hasil Kuadrat " << n << " adalah " << quad(n) << endl;
	cout << endl << "Cek bilangan prima, Masukkan angka : ";
	cin >> n;
	
	// Call function
	cout << "Bilangan tersebut " << prime(n) << endl;
	return 0;
}