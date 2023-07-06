#include "header.h"

int main() {
	string jawabanSiap;
	int result = 3;
	cout << "Selamat Datang di Quiz Abacadabra" << endl;
	cout << "Silahkan baca ketentuan berikut!" << endl;
	ketentuan();
	cout << "Apakah sudah siap? (yes/no) ";
	cin >> jawabanSiap;
	if(jawabanSiap == "yes") {
		startQuiz(result);
	} else if(jawabanSiap == "no") {
		cout << "Baiklah, cukup ketik 'Siap' jika anda sudah siap." << endl;
		cin >> jawabanSiap;
		if((jawabanSiap == "siap") || (jawabanSiap == "Siap")) {
			startQuiz(result);
		}
	}
}