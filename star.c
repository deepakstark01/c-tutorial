#include<stdio.h>
void main()
{
    for(int r=1; r<=5;r++)
    {
       for (int c = 1; c<=r; c++)
       {
         printf("*");
       }
       printf("\n");
       
    }
}