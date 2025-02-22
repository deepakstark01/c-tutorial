#include <stdio.h>

void changeValue(int *p) {
    *p = 50;
}

int main() {
    int x = 10;
    changeValue(&x);
    printf("x = %d\n", x);
    return 0;
}