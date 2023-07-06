#include "header.h"

// Quadratical function

int quad(int i) {
	return i * i;
}

// Prime Number checking Function

string prime(int n) {
	int counter = 0;
	if(n == 1) return "Bukan Prima";
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			counter++;
		}
		if(counter > 2) {
			return "Bukan Prima";
		}
	}
	return "Prima";
}