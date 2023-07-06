#include <iostream>

#define length 3

using namespace std;

struct dataAnak {
    string nama;
    int umur;
    string kelompok;
    string pembimbing;
};

class Belma {

    public:
        // Dummy Constructor
        Belma();

        // Main Constructor
        Belma(int, string, int);

        // Public Function
        void tampilData(string);
        void cariData(string);

        // Public Variable
        dataAnak data[length];

};