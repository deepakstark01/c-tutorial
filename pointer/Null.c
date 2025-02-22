#include<stdio.h>
#include <stdlib.h> // free 
void main()
{
    int a = 10;
    int *p = NULL;
    p = &a; // p k pass adress a ka hai
    // A pointer can hold the adress of variable 
    printf("%d\n",a);
    // printf("%d\n",*p); // 1871245132  * use for value at the adress
    // free(p); // free delete 

    *p = 22;
    printf("%d", a);
}