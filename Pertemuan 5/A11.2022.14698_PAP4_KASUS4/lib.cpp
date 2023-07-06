#include "header.h"

void ketentuan() {
	cout << "1. Silahkan masukkan tebakan mu sebanyak 5x" << endl;
	cout << "2. Tebakan mu akan dijumlahkan dan dibandingkan dengan Jawaban" << endl;
	cout << "3. Jika sama, maka kamu Menang!. Jika tidak, Maka kamu Kalah!" << endl;
}

int userGuess() {
	int sum = 0, guessNum;
	for(int i = 1; i <= 5; i++) {
		cout << "Tebakan ke-" << i << " : ";
		cin >> guessNum;
		sum += guessNum;
	}
	return sum;
}

bool resultCheck(int result, int guessSum) {
	if(guessSum == result) return true;
	return false;
}

void startQuiz(int result) {
	int guessSum = userGuess();
	if(resultCheck(result, guessSum)) {
		cout << "Selamat tebakan anda benar!" << endl;
		cout << "Jumlah dari tebakan anda = " << guessSum << endl;
		cout << "Jawaban sistem = " << result << endl;
	} else {
		cout << "Sayang sekali, anda kurang beruntung!" << endl;
		cout << "Jumlah dari tebakan anda = " << guessSum << endl;
		cout << "Jawaban sistem = " << result << endl;
	}
}