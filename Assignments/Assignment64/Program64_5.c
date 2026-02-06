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
//  Discription 	: It is used to Check wether 1st & 32th bit is On or OFF.
//  Input 			: Unsigned Integer
//  Output 			: Boolen
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask = 0x80000001;
	UNIT iResult = 0;

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
	BOOL bRet = FALSE;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	bRet = ChkBit(iNo);

	if (bRet == TRUE)
	{
		printf("7th & 18th & 21th & 28th Bits are ON\n");
	}
	else
	{
		printf("7th & 18th & 21th & 28th Bits are OFF\n");
	}
	return 0;
}