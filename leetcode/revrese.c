#include<stdio.h>
int revrse(int nummber)
{

    int r;
    int rev = 0;
    while(nummber>0) // false if 0
    {
       r = nummber%10; // % remainder
       rev = rev*10+r;  
       nummber = nummber/10; // / devide

    }
    return rev;
}

void main()
{
    int num = 525235412;
    int oldnum = num ;
    int rev = revrse(num);
   
    if(oldnum==rev)
    {
        printf("Number is palindrom  Num = %d  and reverse = %d", oldnum, rev);
    }
    else
    {
         printf("Number is not palindrom Num = %d  and reverse = %d", oldnum, rev);
        
    }
    

}