///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files & typedef for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
 
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name 	: ChkBit
//  Discription 	: It is used to Check wether 15th bit is On or OFF.
//  Input 			: Unsigned Integer
//  Output 			: Boolen
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00004000;
	UINT iResult = 0;

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
	UINT iNo = 0;
	BOOL bRet = FALSE;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	bRet = ChkBit(iNo);

	if (bRet == TRUE)
	{
		printf("15th Bit is ON\n");
	}
	else
	{
		printf("15th Bit is OFF\n");
	}
	return 0;

}
