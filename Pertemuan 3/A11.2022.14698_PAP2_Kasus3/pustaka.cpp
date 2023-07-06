#include "header.h"

int MAX2(int a, int b) {
	if (a > b) return a;
	return b;
}

int MAX4(int a, int b, int c, int d) {
	cout << endl << "terdapat bilangan " << a << ", " << b << ", " << c << ", " << d << endl;
	return MAX2(MAX2(a, b), MAX2(c, d));
}

int pangkat2(int a) {
	int result = a * a;
	return result;
}
int pangkat3(int a) {
	int result = pangkat2(a) * a;
	return result;
}

int fahrenheit(int a) {
	float result = a * 180 / 100 + 32;
	return result;
}

int celcius(int a) {
	int result = (fahrenheit(a) - 32) * 100 / 180;
	return result;
}