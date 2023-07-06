#include "header.h"

void ketentuan() {
	cout << "1. Silahkan masukkan tebakan mu sesuai keinginan" << endl;
	cout << "2. Tebakan mu akan dibandingkan dengan Jawaban Sistem" << endl;
	cout << "3. Jika sama, maka kamu Menang!. Jika tidak, Maka kamu Kalah!" << endl;
	cout << "4. Kamu hanya memiliki 3x kesempatan, semangat!" << endl;
}

bool resultCheck(int result, int guessNum) {
	int gap = guessNum - result;
	if(gap == 0) return true;
	if((gap == 1) || (gap == -1)) {
		cout << "Sedikit lagi! ";
		return false;
	}
	cout << "Angka mu terlalu jauh! ";
	return false;
}

void startQuiz(int result) {
	int guessNum;
	cout << "Masukkan tebakan anda : ";
	cin >> guessNum;
	if(resultCheck(result, guessNum)) {
		cout << "Selamat anda beruntung, tebakan anda benar!" << endl;
		cout << "Tebakan anda adalah = " << guessNum << endl;
		cout << "Jawaban = " << result << endl;
	} else {
		for(int i = 2; i > 0; i--) {
			cout << "Kesempatan anda tersisa " << i << "x!" << endl;
			cout << "Masukkan tebakan anda : ";
			cin >> guessNum;
			if(resultCheck(result, guessNum)) {
				cout << "Selamat tebakan anda benar!" << endl;
				cout << "Tebakan anda adalah = " << guessNum << endl;
				cout << "Jawaban = " << result << endl;
				break;
			}
		}
		cout << "Sayang sekali, anda masih kurang beruntung!" << endl;
	}
}