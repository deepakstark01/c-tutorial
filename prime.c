#include<stdio.h>
void main()
{

    int num = 5;
    int x=1;
    for(int i=2; i<num-1; i++)
    {

       if(num%i==0) 
       {
        x=0;
        break;
       }

    }
    if(x)  // 
    {
        printf("Number is prime %d", num);

    }
    else{
        printf("Number is not prime %d", num);
    }
}