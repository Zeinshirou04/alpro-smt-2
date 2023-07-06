#include "header.h"

    // Fungsi untuk megnhtiung umur
    int guessPerson::getAge() {
        this->personAge = this->currentYear - this->bornYear;
        return this->personAge;
    }