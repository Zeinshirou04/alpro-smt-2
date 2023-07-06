#include "header.h"

int main() {
	int length = 5, arr[length] = {1, 5, 3, 4, 2}, temp, min;
	for(int i = 1; i <= length - 1; i++) {
		temp = arr[i];
		for(int j = i - 1; j >= 0; j--) {
			if(arr[j] > temp) {
				arr[i] = arr[j];
				min = j;
			}
		}
		arr[min] = temp;
	}
	for(int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}