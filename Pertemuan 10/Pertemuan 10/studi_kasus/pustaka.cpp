#include "header.h"

void tukar(int *x, int *y) {
    int dump = *x;
    *x = *y;
    *y = dump;
}