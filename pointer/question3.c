#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("%d %d %d\n", *ptr, *(ptr+2), *(ptr+4));
    return 0;
}