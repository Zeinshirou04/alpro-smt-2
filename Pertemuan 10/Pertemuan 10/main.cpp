#include "header.h"

int main() {
	int num = 5, arr[3] = {1, 2, 3};
	
	cout << "#\n" << "Num value (main) = " << num << endl;
	cout << "Num address (main) = " << &num << endl;

	print_num(&num);

	cout << "#\n" << "Num value (main after void) = " << num << endl;
	cout << "Num address (main after void) = " << &num << endl;

	// cout << "Num by value = " << num << endl;
	// cout << "Num address = " << a << endl;
	// val_up(a);
	// cout << "#\n" << "Num by refrence = " << *a << endl;
	// cout << "Num by value = " << num << endl;
	// a = &arr[0];
	// val_up(a);
	// cout << "#\n" << "Array[0] address = " << a << endl;
	// cout << "Array[0] by refrence = " << *a << endl;
	// cout << "Array[0] by value = " << arr[0] << endl;
	// a = &arr[1];
	// val_up(a);
	// cout << "#\n" << "Array[1] address = " << a << endl;
	// cout << "Array[1] by refrence = " << *a << endl;
	// cout << "Array[1] by value = " << arr[1] << endl;
	// a = &arr[2];
	// val_up(a);
	// cout << "#\n" << "Array[2] address = " << a << endl;
	// cout << "Array[2] by refrence = " << *a << endl;
	// cout << "Array[2] by value = " << arr[2] << endl;
	// int *b;
	// b = a;
	// val_up(b);
	// cout << "#\n" << "Array[2] address = " << b << endl;
	// cout << "Array[2] by refrence = " << *b << endl;
	// *b = 15;
	// val_up(b);
	// cout << "#\n" << "Array[2] by refrence (a) = " << *a << endl;
	// cout << "Array[2] by refrence (b) = " << *b << endl;
	// cout << "Array[2] by value = " << arr[2] << endl;
	return 0;
}