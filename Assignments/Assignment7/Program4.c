//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Discription :   It is used to print Odd Numbers till that number
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
	int iCnt = 0;									// Counter For loop

	if (iNo < 0)									// Updater
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= iNo; iCnt = iCnt+2)
	{
		printf("%d\t", iCnt);
	}
}	//End of OddDisplay

// O(N/2)

//////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
//////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;

	printf("Enter Number\n");						// Accept a Number From user
	scanf("%d", &iValue);


	Display(iValue);								// Method Call

	return 0;
}	// End of main
