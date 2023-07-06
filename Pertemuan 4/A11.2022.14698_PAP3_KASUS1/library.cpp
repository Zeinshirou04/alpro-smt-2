#include "header.h"

void hitungGaji(double rate, double jam) {
	double gaji;
	if(jam > 8){
		gaji = (jam * rate) - ((jam - 8) * rate);
	} else {
		gaji = rate * jam;
	}
	cout << endl << "Karena cost per hour anda adalah Rp. " << rate << endl;
	if (jam > 8) {
		double bonus = lembur(jam, gaji, rate), totalGaji = gaji + bonus;
		cout << "Karena anda ambis, anda mendapatkan bonus sebesar " << bonus << endl;
		cout << "maka gaji keseluruhan anda adalah Rp. " << totalGaji << endl;
	} else {
		cout << "maka gaji keseluruhan anda adalah Rp. " << gaji << endl;
	}
}

double lembur(double jam, double gaji, double rate){
	double jamLembur;
	jamLembur = jam - 8;
	return jamLembur * 10000;	
}