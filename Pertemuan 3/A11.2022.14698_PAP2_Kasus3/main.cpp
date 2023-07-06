#include "header.h"

int main() {
	int a, b, c, d, userInput, suhu;
	cout << endl << "Masukkan bilangan a hingga d dalam format (a b c d) : ";
	cin >> a >> b >> c >> d;
	int resultMAX4 = MAX4(a, b, c, d);
	cout << "Bilangan terbesar diantara ke-empatnya adalah " << resultMAX4 << endl;
	cout << "Masukkan bilangan yang akan dipangkatkan 2 dan 3 : ";
	cin >> userInput;
	int resultSatu = pangkat2(userInput), resultDua = pangkat3(userInput);
	cout << userInput << " pangkat 2 = " << resultSatu << endl;
	cout << userInput << " pangkat 3 = " << resultDua << endl;
	cout << "Masukkan suhu dalam celcius : ";
	cin >> suhu;
	int suhuF = fahrenheit(suhu), suhuC = celcius(suhu);
	cout << suhuC << " celcius pada fahrenheit menjadi " << suhuF << " fahrenheit" << endl;
	return 0;
}