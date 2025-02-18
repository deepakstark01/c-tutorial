#include<stdio.h>
void main()
{
    int row = 4, col = 4;

    for (int r = 1; r <=row; r++) // row 
    {
       
          for(int c=1 ; c<=col; c++) // column
          {
            printf("*");
          }
          printf("\n");

    }
    
}