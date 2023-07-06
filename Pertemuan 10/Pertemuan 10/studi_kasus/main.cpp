#include "header.h"

int main() {
    int a = 5, b =6;
    tukar(&a, &b);
    cout << "Value of A is " << a << endl;
    cout << "Value of B is " << b << endl;
    return 0;
}