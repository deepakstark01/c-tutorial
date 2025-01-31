// battry saver mode  20% power saving  5% ultra power saving mode
// battry 80 % power saving mode off  phone 100 % full charge 
// battry 15 % alert battry low


#include<stdio.h>
void main ()
{
    int Battry;
    printf("enter the phone battry level\n");
    scanf("%d", &Battry); // Battry = 55
    if (Battry==100 || Battry>95) //  0 || 0  = > 0
    {
        printf("%d Battry  health  full\n", Battry);

    }
    else if (Battry<95 && Battry>20) // 1 && 1 => 1
    {
       printf("%d Battry  health  is Good\n", Battry); 
    }
    else if(Battry<20 && Battry>15)
    {  
        printf("%d Battry  phone in power saving mode\n", Battry);
    }

    else if(Battry>5 && Battry<15)
    {
        printf("%d Battry  low\n", Battry);

    }
    else if(Battry<5 && Battry>1)
    {
        printf("%d Battry Ultra saving mode on\n", Battry);

    }
    else{
        printf("phone dead");
    }


}
