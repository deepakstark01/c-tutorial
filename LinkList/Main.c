#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

void main()
{
    struct node* A = (struct node*)malloc(sizeof(struct node));  // (type)malloc(sizeof(struct node))
    struct node* B = (struct node*)malloc(sizeof(struct node)); 
    struct node* C = (struct node*)malloc(sizeof(struct node)); 
    struct node* D = (struct node*)malloc(sizeof(struct node)); 

    A->data=2;
    A->link =B;

    B->data=4;
    B->link =C;

    C->data=6;
    C->link =D;

    D->data=2;
    D->link =NULL;
    struct node *ptr=A;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->link;
    }

    // printf("%d", A->data);
    // printf("%d", B->data);
    // printf("%d", C->data);
    // printf("%d", A->data);



}