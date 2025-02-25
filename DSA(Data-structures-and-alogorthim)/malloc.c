#include<stdlib.h>
#include<stdio.h>
void main()
{
    int* Array = NULL; // pointer  hold adress
    int size;
    printf("ENter the array size \n");
    scanf("%d", &size);
    Array = (int*)malloc(size*sizeof(int)); // memory allocted
    for ( int i = 0; i < size; i++)
    {
       printf("ENter the position %d elment\n", i);
       scanf("%d", &Array[i]);
    }
    printf(" Your array is here\n");
    for ( int i = 0; i < size; i++)
    {
       printf("%d , ", Array[i]);
       
    }

   
    
}