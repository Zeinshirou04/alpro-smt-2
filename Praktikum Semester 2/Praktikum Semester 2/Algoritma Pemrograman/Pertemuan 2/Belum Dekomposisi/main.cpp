#include <iostream>

using namespace std;

int quad(int);
string prime(int);

int main() {
	int n;
	cout << endl << "Masukkan Bilangan yang akan dikuadratkan : ";
	cin >> n;
	cout << "Hasil Kuadrat " << n << " adalah " << quad(n) << endl;
	cout << endl << "Cek bilangan prima, Masukkan angka : ";
	cin >> n;
	cout << "Bilangan tersebut " << prime(n) << endl;	
	return 0;
}

// Fungsi Kuadrat 2

int quad(int i) {
	return i * i;
}

string prime(int n) {
	int counter = 0;
	if(n == 1) return "Bukan Prima";
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			counter++;
		}
		if(counter > 2) {
			return "Bukan Prima";
		}
	}
	return "Prima";
}