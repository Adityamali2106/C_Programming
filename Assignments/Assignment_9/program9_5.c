/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Discription :   It is used to find Factorial of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
	int iCnt = 0;
	int iAns1 = 0;
	int iAns2 = 0;
	if (iNo < 0)								// Updater
	{
		iNo = -iNo;
	}

	for(iCnt = iNo,iAns1 = 1, iAns2 = 1;iCnt != 0; iCnt--)
	{
		if ((iCnt%2) == 0)
		{
			iAns1 = iAns1 * iCnt;
		}

		if ((iCnt%2) != 0)
		{
			iAns2 = iAns2 * iCnt;
		}
	}

	return iAns1 - iAns2;

}	//End of Factorial

///////////////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number\n");
	scanf("%d", &iValue);

	iRet = Factorial(iValue);			// Method Call

	printf("Even Factorial of number is %d\n", iRet);

	return 0;
}	//End if main

///////////////////////////////////////////////////////////////////////////////////
//
//	input = 5					OutPut : -7
//	input = -5					OutPut : -7
//	input = 15					OutPut : -1381905
//	input = 9					OutPut : -561
//	input = 10					OutPut : 2895
//
///////////////////////////////////////////////////////////////////////////////////
