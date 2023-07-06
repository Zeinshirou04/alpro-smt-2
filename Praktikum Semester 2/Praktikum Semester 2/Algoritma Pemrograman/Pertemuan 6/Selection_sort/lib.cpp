#include "header.h"

void selectionSort(int arr[], int length) {
	int temp, min;
	for(int i = 0; i < length - 1; i++) {
		min = i;
		for(int j = i +1; j < length; j++) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for(int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
}