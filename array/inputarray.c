#include<stdio.h>
void main()
{
    int array[5];
    for (int i = 0; i<5; i++)
    {
       printf("Enter the position index %d value : ", i );
       scanf("%d",&array[i]);
    }

    printf(" Your array is here \n");

    for (int i = 0; i<5; i++)
    {
       printf(" valye at %d index = %d\n", i, array[i] );
      
    }

    
}