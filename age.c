// Question :  Voting detection

#include <stdio.h>
void main()
{

    int age;
    printf("enter your age : \n");
    scanf("%d", &age);
    if (age>18)
    {
        printf("Congrats You are elgiable for vote your age is %d \n", age);
    }
    else
    {
        
        printf("You are not elgiable for vote  your age is  %d less than 18  \n" , age);
    }
}