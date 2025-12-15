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
//  Function Name : SearchFirstOcc
//  Discription :   It is used to search First Occerance of given data in Linked list.
//  Input :         Pointer pointing to struct node,Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          14/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head,int iNo)
{
	int iPos = 0;

	iPos = 1;
	while(NULL != Head)
	{
		if ((Head -> Data) == iNo)
		{
			return iPos;
		}
		iPos++;
		Head = Head -> Next;
	}

	return -1;
}	//End of SearchFirstOcc

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE First = NULL;
	int iRet = 0;

	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);

	Display(First);

	iRet = SearchFirstOcc(First,30);

	if (iRet > 0)
	{
		printf("First Occerance of 30 is %d\n", iRet);
	}
	else
	{
		printf("Data is not present in List\n");
	}

    return 0;
}   // End of main

