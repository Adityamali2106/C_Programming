///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               			// For Input Output 
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


struct node   								// Stcucture declaretion of linked list
{
	int Data;								// actual data 
	struct node *Next;						// next node pointer to link one node to another node
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to display a Linked list.
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          14/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
	if(NULL == Head)
	{
		printf("List is Empty");
	}

	while(Head != NULL)
	{
		printf("| %d |-> ", Head -> Data);
		Head = Head -> Next;
	}
	printf("\n");
}	// End of Display

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Discription :   It is used to insert node at First position of a Linked list.
//  Input :         Pointer to pointer witch is pointing to struct node,Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          14/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	if(NULL == newn)
	{
		printf("Memory Allocation failed\n");
		return;
	} 

	newn -> Next = NULL;
	newn -> Data = iNo;

	if (NULL == (*Head))
	{
		(*Head) = newn;
	}
	else
	{
		newn -> Next = (*Head);
		*Head = newn;
	}
}	// End of InsertFirst

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumDigit
//  Discription :   It is used to calculate Summation Digit of all nodes data from Linked list.
//  Input :         Pointer pointing to struct node
//  Output :        void
//  Author :        Aditya Mali
//  Date :          14/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void SumDigit(PNODE Head,int iNo)
{
	int iSum = 0;
	int iDigit = 0;

	while(NULL != Head)
	{
		iSum = 0;
		while((Head -> Data) != 0)
		{
			iDigit = (Head -> Data) % 10;
			Head -> Data = (Head -> Data) / 10;
			iSum = iSum + iDigit;
		}

		printf("%d\n", iSum);
		Head = Head -> Next;
	}
}	//End of SumDigit

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE First = NULL;
	int iRet = 0;

	InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);

	Display(First);

	SumDigit(First);

    return 0;
}   // End of main

