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
//  Discription 	: It is used toaccept two positions and Check wether bit at first or bit at second positio is On or OFF.
//  Input 			: Unsigned Integer,First positions,Second position
//  Output 			: Boolen
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UNIT iNo,int iPos1,int iPos2)
{
	UNIT iMask1 = 0x00000001;	
	UNIT iMask2 = 0x00000001;

	iMask1 = iMask1 << iPos1;
	iMask2 = iMask2 << iPos2;

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
	int iPos1 = 0;
	int iPos2 = 0;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	printf("Enter Position first : \n");
	scanf("%d",&iPos1);

	printf("Enter Position Secound : \n");
	scanf("%d",&iPos2);

	bRet = ChkBit(iNo,iPos1,iPos2);

	if (bRet == TRUE)
	{
		printf("%dth or %dth Bits are ON\n",iPos1,iPos2);
	}
	else
	{
		printf("%dth or %dth Bits are OFF\n",iPos1,iPos2);
	}
	return 0;
}