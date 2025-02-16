#include<stdio.h>
int calculator(int a, int b, char op)
{
    int result;
    switch(op)
    {
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return result;
}
void main()
{
    int a = 10;
    int b = 20;
    char op;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the operator: ");
    scanf(" %c",&op);
    int result = calculator(a,b,op);
    printf("Result: %d",result);
}