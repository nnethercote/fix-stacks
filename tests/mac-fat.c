// This file contains the source code for some tests. If you change this file
// you may need to regenerate some test files. (Even changing the number of
// lines in this comment would have an effect.)
//
// See `tests/README.md` for more details.

#include <stdio.h>

static void duplicate() {
    printf("fat duplicate");
}

static int fat_A(int x) {
    x = x * 2;
    duplicate();
    return x;
}

void fat_B(int* x) {
    *x += fat_A(*x);
}
