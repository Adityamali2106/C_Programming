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
//  Function Name 	: CountOne
//  Discription 	: It is used to count number of ON(1) boit in.
//  Input 			: Unsigned Integer
//  Output 			: Count of 1
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
    int iWidth = iEnd - iStart + 1;

    long iMask = (0x00000001L << iWidth) - 1;

    iMask = iMask << (iStart - 1);

    return iNo ^ iMask;
}


///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	UINT iNo = 0;
    int iPos1 = 0,iPos2 = 0;
	int iRet = 0;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

    printf("Enter Start Position  : \n");
	scanf("%d",&iPos1);

    printf("Enter End Position : \n");
	scanf("%d",&iPos2);

	iRet = ToggleBitRange(iNo,iPos1,iPos2);

	printf("Modified Number is : %d\n",iRet);

	return 0;
}