#include<stdio.h>
void main()
{
   int R = 5;
   int C = 5;
   for (int row_num = 0; row_num <=R; row_num++)
   {
      // space
      for (int space = 0; space<=R-row_num; space++)
      {
        printf(" ");
      }
      
      // star
      for (int c = 0; c <=row_num; c++)
      {
        printf("*");
      }

      printf("\n");
    

   }
   

}