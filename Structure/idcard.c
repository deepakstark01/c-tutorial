#include<stdio.h>
#include<string.h>
// user define data type
struct id_card // declear structure 
{
   char name[20];
   int roll_num;
   int class;
   int phone;
//    char college[100];
};


void main()
{
    // sandeep , shobhika , aarti 
    struct id_card  sandeep;
    struct id_card  shobhika;
    struct id_card  aarti;

   printf("Enter Name : ");
   gets(sandeep.name);
   
    sandeep.roll_num = 25;
    sandeep.class= 12;
    sandeep.phone= 1234567890;
    // sandeep.college= "Sai Nath university";

    // shobhika
    printf("Enter Name : ");
   gets(shobhika.name);
    
    shobhika.roll_num= 12;
    shobhika.class=12;
    shobhika.phone=1234567890;
    // shobhika.college="Ingram engieering college";
    
    //                                                                                                          
    printf("Enter Name : ");
    gets(aarti.name);
     
    aarti.roll_num= 1;
    aarti.class=12;
    aarti.phone=1234567890;
    // aarti.college="Gautam buddha engieering college";


    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", sandeep.name, sandeep.roll_num, sandeep.class, sandeep.phone);
    printf("---------------------\n");
    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", shobhika.name, shobhika.roll_num, shobhika.class, shobhika.phone);
    printf("---------------------\n");
    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", aarti.name, aarti.roll_num, aarti.class, aarti.phone);

    puts(shobhika.name);

}