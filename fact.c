#include<stdio.h>
void main()
{
    int n =5;
    int fact = 1;
    int i =1;
    do 
    {

        fact = fact*i; 
        i++;
    } while(i<=n);
    printf("%d",fact);


   
    
}