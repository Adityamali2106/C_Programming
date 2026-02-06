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
//  Function Name 	: ToogleBit
//  Discription 	: It is used to Toogle the given position bit and return the modified number.
//  Input 			: Unsigned Integer, Position
//  Output 			: Unsigned Integer
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

UNIT ToogleBit(UNIT iNo,int iPos)
{
	UNIT iMask = 0x00000001;
	int iResult = 0;

	iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	UNIT iNo = 0;
	UNIT iRet = 0;
	int iPos = 0;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	printf("Enter Position : \n");
	scanf("%d",&iPos);

	iRet = ToogleBit(iNo,iPos);

	printf("Modified Number is : %d\n", iRet);

	return 0;
}