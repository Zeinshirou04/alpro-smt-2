#include "header.h"

int main() {
	int length = 5, arr[length] = {1, 5, 3, 4, 2};
	for(int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
	bubbleSort(arr, length);
	return 0;
}