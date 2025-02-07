#include<stdio.h>
void main()
{
    int i=1;
    int A = 0;
    int B = 1;
    int C;
    printf("%d,", A);
    printf("%d,", B);
    while (i<11)
    {
        C= A+B;
        printf("%d ,", C);
        A= B;
        B=C;
        i++;
    }
    
}