#include<stdio.h>
void main()
{
    int arr[5] = {11,1,5,2,3}; // run nhi ho rh 
    int num , postion ;
    int flag= 0;
    printf(" Your array is here\n");
    for (int i = 0; i<5; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\nEnter which number you want find ?");
    scanf("%d",&num);
    // linear  search
    for (int i=0; i<5; i++)
    {
        if(num==arr[i])
        {
            flag=1;// true
            postion= i;
            break;
        }

    }

    if(flag)
    {
        printf("\nNumber %d is found at index %d\n",num, postion);
    }
    else
    {
        printf("Number %d is not found",num);
    }

    
    
}