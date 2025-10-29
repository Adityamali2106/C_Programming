//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Discription :   It is used to print First 5 Multiles of number
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          15/10/2025
//
//////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
	int iCnt = 0;									// Counter For loop

	if (iNo < 0)									// Updater
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= 5; iCnt++)
	{
		printf("%d\t", iNo*iCnt);
	}
}	//End of MultipleDisplay

// O(N)

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


	MultipleDisplay(iValue);								// Method Call

	return 0;
}	// End of main
