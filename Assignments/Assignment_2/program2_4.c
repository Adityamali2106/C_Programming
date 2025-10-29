//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to Display Number in second Number times
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          23/10/2025
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
	int iCnt = 0;

	if ( iFrequency < 0)								// Updater
	{
		iFrequency = -iFrequency;
	}

	for(iCnt = 1;iCnt <= iFrequency; iCnt++)
	{
		printf("%d\t", iNo);
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
	int iCount = 0;

	printf("Enter Number\n");							// Accept a Number From user
	scanf("%d", &iValue);

	printf("Enter Frequency\n");						// Accept a Frequency From user
	scanf("%d", &iCount);

	Display(iValue,iCount);								// Method Call

	return 0;
}	// End of main

//////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : 12       	input2 : 5        	output : 12	 12	 12  12  12
//  input2 : -2       	input2 : 3        	output : -2	 -2  -2
//  input3 : 21       	input2 : -3        	output : 21	 21  21
//  input4 : -2			input2 : 0        	output : 
//  input5 : 9       	input2 : -5        	output : 9  9  9  9  9
//
//////////////////////////////////////////////////////////////////////////
