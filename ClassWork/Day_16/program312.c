#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

//Call by value

void Display(PNODE first)
{}
int Count (PNODE first)
{
    return 0;
}

// Call by Address

void InsertFirst(PPNODE first,int iNo)
{}

void InsertLast(PPNODE first,int iNo)
{}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{}

int main()
{
    PNODE head = NULL;

    Display(head);

    Count(head);

    InsertFirst(&head,11);

    InsertLast(&head,22);

    InsertAtPos(&head,30,2);

    return 0;
}