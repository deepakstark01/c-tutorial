#include<stdio.h>
int sum(int numA, int numB, int numC)  // define 
{
    return numA+numB+numC;
};

float percentage(int sub1, int sub2, int sub3)
{
    int total = sum(sub1, sub2, sub3);
    float per =  (total/300.0)*100;
    return per;

};

void main()
{
    int english=70, math = 55, phyisc = 70;
    float p = percentage(english, math, phyisc);
    printf("%f\n", p);
    english=75, math = 54, phyisc = 78;
    p = percentage(english, math, phyisc);
    printf("%f\n", p);
}

