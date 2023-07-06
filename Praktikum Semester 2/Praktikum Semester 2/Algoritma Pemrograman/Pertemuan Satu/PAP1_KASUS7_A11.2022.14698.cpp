#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "\nMasukkan panjang Array : ";
	cin >> n;
	int larik[n];
	for (int i = 1; i <= n; i++) {
		cout << "Input ke-" << i << " : ";
		cin >> larik[i-1];
	}
	cout << "Hasil Array :\t";
	for (int i = 0; i < n; i++) {
		cout << larik[i] << "\t";
	}
	cout << endl;
	return 0;
}