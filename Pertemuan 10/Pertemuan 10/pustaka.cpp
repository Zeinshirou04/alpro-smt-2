#include "header.h"

int val_up(int *p) {
    *p = *p + 10;
    return 1;
}

void print_num(int *a) {
    *a += 5;
    cout << "#\n" << "Num Value (void) : " << *a << endl;
    cout << "Num Address (void) : " << &a << endl;
}