#include<stdio.h>
void main()
{
    int array[100]={2,1,3,5};
    int size= 4;
    printf("Before deletion at bigening\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    size=size-1;
    printf("\nAfter deletion at bigening\n");
    for(int i=0; i<size; i++)
    {
       array[i]=array[i+1];
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    
}