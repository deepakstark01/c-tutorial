#include<stdio.h>
void main()
{
    int matrix [2][3] ={ {0,11,3}, 
                         {1,3,4}  };
    for (int i = 1; i <2; i++)  // row 
    {
        for(int j=0 ; j<3; j++) // colum
        {
            printf("Index (%d, %d) : %d ,",i,j ,matrix[i][j]); // i = 1,
        }
       printf("\n");
    }
    
}