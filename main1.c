#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("It is leap year");

    }
    else
    {
        printf("It is not  leap year");

    }
}