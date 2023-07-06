#include "header.h"

void bubbleSort(int arr[], int length) {
	bool swap = false;
	int temp;
	while(!swap) {
		swap = true;
		for(int i = 0; i < length - 1; i++) {
			if(arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = false;	
			}
		}
	}
	cout << endl;
	for(int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
}