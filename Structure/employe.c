#include<stdio.h>
#include<string.h>

struct employe
{
    char Name[10];
};

void main()
{
    struct employe e1;
    strcpy(e1.Name, "John Doe");
    printf("%s", e1.Name);
    
    
}