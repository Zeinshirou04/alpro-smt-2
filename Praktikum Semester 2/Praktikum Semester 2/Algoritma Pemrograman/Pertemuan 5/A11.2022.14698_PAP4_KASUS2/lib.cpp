#include "header.h"

void startCount(int n) {
	int length = n / 2, j = 0, sum = 0;
	int evenNum[length];
	cout << "Hasil array genap = ";
	for(int i = 1; i <= n; i++) {
		for(; j <= length; j++) {
			if(i % 2 == 0) {
				evenNum[j] = i;
				sum += evenNum[j];
				cout << evenNum[j] << "\t";
				break;
			}
			break;
		}
	}
	cout << endl;
	double average = sum / length;
	cout << "Jumlah deret adalah = " << sum << endl;
	cout << "Jumlah Rata-Rata adalah = " << average << endl;
	int min = min(evenNum, length);
}

int min(int evenNum, length) {
	int min = 999;
	for(int i = 0; i < length; i++) {
		if(min > n[i]) {
			min = n[i];
		}
	}
	
}

int max(int evenNum, length) {
	int min = 0;
	for(int i = 0; i < length; i++) {
		if(min < n[i]) {
			min = n[i];
		}
	}
}