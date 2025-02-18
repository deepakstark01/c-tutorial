#include<stdio.h>
void main()
{
    int trow= 4;

    for ( int rowNum = 1;  rowNum <=trow; rowNum++)
    {
       for(int c = 1; c<=rowNum; c++) // 2
       {
         printf("*"); // *
       }
       printf("\n");

    }
    
}