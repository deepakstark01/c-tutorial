#include<stdio.h>
int isOdd(int num) // 7
{
   if(num%2 ==0) // 1==0  
   {
    return 1;
   }
   else
   {
    return 0;
   }
   
};
void main()
{
    int num, x; // num 7
    printf("Enter the value \n");
    scanf("%d", &num);
    x = isOdd(num); // isOdd(7) x= 0
    if(x)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}

