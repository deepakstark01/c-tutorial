#include<stdio.h>
void main()
{
    int nums[3] = {3,2,4};
    int target=6;
    for(int i=0 ; i<3; i++)
    {
        for(int j=1; j<3; j++) // j = 3
        {
            if(nums[i]+nums[j]==target)  // nums[0]+nums[3]= 9
            {
                printf("%d , %d", i , j);
            }
        }
    }
}