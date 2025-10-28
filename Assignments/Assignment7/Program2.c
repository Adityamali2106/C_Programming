//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to print Numbers till that number
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt = 0;									// Counter For loop

	if (iNo < 0)									// Updater
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= iNo; iCnt++)
	{
		printf("%d\t", iCnt);
	}
}	//End of Display

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


	Display(iValue);								// Method Call

	return 0;
}	// End of main
