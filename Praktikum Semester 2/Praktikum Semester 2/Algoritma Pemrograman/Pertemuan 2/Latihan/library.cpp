#include "header.h"

int luas_persegi(int n) {
	return n * n;
}

int is_besar(int n){
	int val;
	cout << "Diketahui deret :\t";
	for(int i = 1; i <= n; i++) {
		cout << i << "\t";
		val = i;
	}
	cout << endl;
	cout << "Bilangan terbesar adalah : " << val << endl;
	return 0;
}

int is_kecil(int n) {
	return 0;
}

bool is_ganjil(int n) {
	if(n % 2 != 0) return true;
	return false;
}

bool is_genap(int n) {
	if(n % 2 == 0) return true;
	return false;
}

int toPositive(int n) {
	if(n < 0) return n * -1;
	return n;
}

int toNegative(int n) {
	if(n > 0) return n * -1;
	return n;
}

int sum_n(int n) {
	return 0;	
}

float avg_n(int n) {
	return sum_n(n) / n;
}
