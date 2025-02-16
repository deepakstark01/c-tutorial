#include <stdio.h>
void main()
{
    // int x = 3;
    // int y = x++ + ++x; // 3 + 5
    // printf("%d %d\n", x, y);

    // int i = 1;
    // printf("%d %d %d\n", i, i++, ++i); // 1 , 1 , 3

    // for (int i = 0; i < 5; i++) {

    // printf("%d ", i); // 0 1 2 3 4

    // }

    // int i = 0;
    // while (i++ < 5) // 5<5
    // {
    //     printf("%d ", i); //5
    // }

    // int x = 5;
    // printf("%d\n", x++); //  5
    // printf("%d\n", x++); // 6
    // printf("%d",x); // 7

    // int a = 5, b = 10;
    // a = ++b; //  11
    // b = a-- + b++; // 11  +  11  = 22
    // printf("%d %d\n", a, b); // 10, 22

    // int x = 7, y = 3;  
    // y = x-- + ++y;   
    // x = --y + x++;  
    // printf("%d %d\n", x, y);

    // int p = 8, q = 12;  
    // p = --q + p++;   // p = 19
    // q = p-- - ++q;  //  19 - 12 =  7 
    // printf("%d %d\n", p, q); // 18


    // int m = 6, n = 4;  
    // m = n++ + --m;  
    // n = ++m - n--;  
    // printf("%d %d\n", m, n);


// Home work 
    int a = 5, b = 7, c;  
    c = a++ + --b;  
    a = ++c - b--;  
    printf("%d %d %d\n", a, b, c);

    int x = 10, y = 5, z;  
    z = --x + y++;  
    x = z++ - --y;  
    printf("%d %d %d\n", x, y, z);


    int p = 4, q = 9, r;  
    r = p-- + q++;  
    p = ++r - --q;  
    printf("%d %d %d\n", p, q, r);

    int a = 3, b = 6, c = 9;  
    a = b++ + --c;  
    b = --a - c++;  
    c = a++ + --b;  
    printf("%d %d %d\n", a, b, c);

    int x = 2, y = 4, z = 6;  
    y = x++ + --z;  
    z = y-- - ++x;  
    x = --y + z++;  
    printf("%d %d %d\n", x, y, z);

    int p = 8, q = 3, r;  
    r = ++p - q--;  
    q = --r + p++;  
    p = r++ - --q;  
    printf("%d %d %d\n", p, q, r);



}