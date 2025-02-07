#include<stdio.h>
void main()
{
    int i = 1;
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    printf(">>>>>>>><<<<<<<<<<\n");
    do
    {
        printf("%d X %d = %d  \n",num, i ,num*i);
        i++;
        
    } while (i<11);
    

}