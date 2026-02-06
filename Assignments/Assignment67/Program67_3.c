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
//  Discription 	: It is used to Check wether 9th or 12th bit is On or OFF.
//  Input 			: Unsigned Integer
//  Output 			: Boolen
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask1 = 0x00000800;	
	UNIT iMask2 = 0x00000100;

	if ((iNo & iMask1) | (iNo & iMask2))
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
		printf("9th or 12th Bits are ON\n");
	}
	else
	{
		printf("9th or 12th Bits are OFF\n");
	}
	return 0;
}