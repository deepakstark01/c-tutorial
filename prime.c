#include<stdio.h>

int isPrime(int number)
{
    for(int i=2; i<number-1; i++)
    {

       if(number%i==0)  // 
       {
        return 0;
       }

    }
    return 1;


}
void main()
{

    int num = 78;
    int x=  isPrime(num);
    
    if(x)  // 
    {
        printf("Number is prime %d", num);

    }
    else{
        printf("Number is not prime %d", num);
    }
}