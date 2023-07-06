#include "header.h"

int main(){
	double cph, jam;
	cout << "Silahkan masukkan cost per hour anda : ";
	cin >> cph;
	cout << "Dalam sehari, berapa total jam kerja anda? ";
	cin >> jam;
	hitungGaji(cph, jam);
}