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
//  Function Name : DisplayPrime
//  Discription :   It is used to Prime element from Linked list.
//  Input :         Pointer pointing to struct node
//  Output :        void
//  Author :        Aditya Mali
//  Date :          14/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
	int iCnt = 0,iSum = 0;

	while(NULL != Head)
	{
		for(iCnt = 1,iSum = 0; iCnt <= ((Head -> Data) / 2);iCnt++)
		{
			if (((Head -> Data) % iCnt) == 0)
			{
				iSum = iSum + iCnt;
			}
		}

		if (iSum == 1)
		{
			printf("%d\n", Head -> Data);
		}

		Head = Head -> Next;
	}
}	//End of DisplayPrime

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE First = NULL;

	InsertFirst(&First,89);
	InsertFirst(&First,22);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,20);
	InsertFirst(&First,11);

	Display(First);

	DisplayPrime(First);

    return 0;
}   // End of main

