#include<stdio.h>
void main()
{
    int numberA,numberB,numberC;
    printf("Enter number A : ");
    scanf("%d", &numberA);   //  10
    
    printf("Enter number B : ");
    scanf("%d", &numberB);  // 20

    printf("Before swaping original values\n");
    printf("numberA = %d\nnumberB = %d \n ", numberA,numberB);
    numberC = numberB;  // lost kho na jye temprory

    numberB = numberA;

    numberA = numberC;
    printf("After swaping values\n");
    printf("numberA = %d\nnumberB = %d \n ", numberA,numberB);
}