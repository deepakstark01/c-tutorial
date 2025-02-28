#include<stdio.h>
void main()
{
    int array[100] ={2,1,3,5};
    int element;
    int size=4;
    
    printf("Before insertion\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i] );
    }
    printf("enter the num you want to insert at end\n");
    scanf("%d",&element);
    array[size]=element;
    size=size+1;
    printf("After  insertion at end\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i] );
    }

}