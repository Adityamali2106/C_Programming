///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files & typedef for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name 	: ChkBit
//  Discription 	: It is used to check wrther given position bit is on or off and return true or false.
//  Input 			: Unsigned Integer, Position
//  Output 			: Boolen
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UNIT iNo,int iPos)
{
	UNIT iMask = 0x00000001;
	int iResult = 0;

	iMask = iMask << (iPos -1);

    iResult = iNo & iMask;

	if (iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	UNIT iNo = 0;
	BOOL bRet = 0;
	int iPos = 0;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	printf("Enter Position : \n");
	scanf("%d",&iPos);

	bRet = ChkBit(iNo,iPos);

	if (bRet == TRUE)
	{
		printf("%dth Bit is ON\n",iPos);
	}
	else
	{
		printf("%dth Bit is OFF\n",iPos);
	}

	return 0;
}