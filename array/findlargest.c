#include<stdio.h>
void main()
{
    int array[5]={2,7,9,17,5}; // array[4]= 5 ,  array[3]= 17
    int Largest =array[0];
    int sum = array[0]; // 2
    for (int i=1 ; i<4 ; i++ )
    {
        if(Largest<array[i])
        {
             Largest= array[i];
        }
        sum = sum+ array[i];
    }
    printf("The largest number from array is %d \n", Largest);
    printf("sum of array  is %d \n", sum);

    for(int i = 4 ; i>=0 ; i--)
    {
        printf("%d , ",array[i] );
    }

}