#include<stdio.h>
void main()
{

    int row=4 ;
    int num = 1;

    for(int rowNum = 0;  rowNum<row; rowNum++)
    {
        for(int colNum=0; colNum<=rowNum; colNum++)
        {
           printf("%d",num);
           num++;
        }
        printf("\n");
    }
}