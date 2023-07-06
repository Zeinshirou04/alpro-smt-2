#include "header.h"

int main() {
	int arr[] = {3, 4, 15, 7, 2, 8};
	int length = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, length);
	cout << endl;
	cout << "Array terurut : " << endl;
	for(int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}