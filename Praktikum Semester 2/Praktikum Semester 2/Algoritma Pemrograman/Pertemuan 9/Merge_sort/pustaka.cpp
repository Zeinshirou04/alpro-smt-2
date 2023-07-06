#include "header.h"

void merge(int l[], int length_l, int r[], int length_r, int arr[]) {
	
	// Variable 
	// i as l[] index, j as r[] index, k as arr[] index
	int i = 0, j = 0, k = 0; 

	// Logic
	while(i < length_l && j < length_r) {
		if(l[i] < r[j]) {
			arr[k] = l[i];
			i++;
			k++;
		} else if(l[i] > r[j]) {
			arr[k] = r[j];
			j++;
			k++;
		}
	}
	while(i < length_l) {
		arr[k] = l[i];
		i++;
		k++;
	}
	while(j < length_r) { 
		arr[k] = r[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int length) {

	// Basis
	if(length < 2) {
		return;
	}

	// Variable
	int mid = length / 2;
	int l[mid];
	int r[length - mid];

	cout << "Array Kiri : ";
	cout << "\t\t";
	cout << "Array Kanan : " << endl;

	// Insert left array value
	for(int i = 0; i < mid; i++) {
		l[i] = arr[i];
		cout << "|" << l[i] << "|" << "\t";
	}

	cout << "\t\t";

	// Insert right array value
	for(int i = 0; i < length - mid; i++) {
		r[i] = arr[i + mid];
		cout << "|" << r[i] << "|" << "\t";
	}

	cout << endl;
	
	// Rekurens
	mergeSort(l, mid);
	mergeSort(r, length - mid);
	merge(l, mid, r, length - mid, arr);
}