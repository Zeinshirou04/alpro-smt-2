#include <iostream>

using namespace std;

class guessPerson {
    protected:
        // Declare variabel yang hanya bisa digunakan pada class dan turunannya

        // Variabel tahun sekarang
        int currentYear = 2023;
        // Variabel umur
        int personAge;
        
    public:
        // Declare variabel yang dapat digunakan oleh program inti

        // Variabel nama orang
        string personName;
        // Variabel tahun lahir
        int bornYear;

        int getAge();
};