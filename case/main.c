#include <stdio.h>
void main()
{
    int n;
    int A, B, result;
    printf("Enter\n 1.Add \n2.Subtract \n3.Multiply\n");
    scanf("%d",&n);// 1
    printf("Enter the number A :"); 
    scanf("%d",&A); // 4
    printf("Enter the number B :");
    scanf("%d",&B); // 5
    
    switch (n) // n = 1
    {
    case 1:
        result = A+B;
        printf("%d", result);
        break;

    case 2:
        result=A-B;
        printf("%d", result);
        break;
    case 3:
        result=A*B;
        printf("%d", result);
        break;

    default:
        printf("You choose wrong option\n");
         printf("Enter\n 1.Add \n2.Subtract \n3.Multiply\n");
        break;
    }
}