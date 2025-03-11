#include<stdio.h>
void main()
{
    int A[2][3]={
        {2,4,1},
        {5,7,9}
    };

    int B[3][2];
    printf("Befor Transpose\n");
    for(int i=0 ; i<2 ;i++ )
    {
        for(int j = 0 ; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose\n");

    for(int i=0 ; i<3 ;i++ )
    {
        for(int j = 0 ; j<3; j++)
        {
            B[i][j]=A[j][i];
        }
      
    }

    for(int i=0 ; i<3 ;i++ )
    {
        for(int j = 0 ; j<2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}
