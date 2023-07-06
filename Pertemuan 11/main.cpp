#include "header.h"

int main() {
    guessPerson Person;

    Person.personName = "Andi";
    Person.bornYear = 2004;

    cout << "Umur dari pengguna " << Person.personName << " adalah " << Person.getAge() << endl;
}