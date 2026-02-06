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
//  Function Name 	: CommonBits
//  Discription 	: It is used to display position of common On bits from that two numbers.
//  Input 			: Unsigned Integer,Unsigned Integer
//  Output 			: Nothing
//  Author 			: Aditya Vijay Mali
//  Date 			: 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CommonBits(UINT iNo1,UINT iNo2)
{
	UINT iCommon = iNo1 & iNo2;
    UINT iMask = 1;
    int i = 0;
    
    printf("Common ON bits at positions: ");
    for (i = 1; i <= 32; i++) {
        if ((iCommon & iMask) != 0) {
            printf("%d ", i);
        }
        iMask = iMask << 1;
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	UINT iNo1 = 0,iNo2 = 0;

	printf("Enter Two Numbers : \n");
	scanf("%d%d",&iNo1,&iNo2);

	CommonBits(iNo1,iNo2);

	return 0;
}