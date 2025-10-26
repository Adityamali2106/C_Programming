//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Discription :   It is used to Display Even Factors of Given number
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          24/10/2025
//
//////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
	int iCnt = 0;

	if (iNo <= 0)								// Updater
	{
		iNo = -iNo;
	}

	for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
	{
		if (((iNo % iCnt) == 0) && ((iCnt % 2)  == 0))
		{
			printf("%d\t", iCnt);
		}
	}
}	//End of DisplayEvenFactor

// O(N/2)

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

	DisplayEvenFactor(iValue);								// Method Call

	return 0;
}	// End of main

//////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : 24				output : 1  2  4  6  8  12  
//  input2 : -1				output : 
//  input3 : 4				output : 2  4  6  8
//  input4 : 0				output : 
//
//////////////////////////////////////////////////////////////////////////
