/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output
#include <stdbool.h>							// For Boolen

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckIsDivisible
//  Discription :   It is used to check given Number is divisible by 5 
//  Input :         Integer
//  Output :        Boolen
//  Author :        Aditya Mali
//  Date :          15/10/2025
//
/////////////////////////////////////////////////////////////////////////

bool CheckIsDivisible(int iNo)
{
	if (iNo < 0)								// Updater
	{
		iNo = -iNo;
	}

	if ((iNo % 5) == 0)							// to check it is divisible by 5
	{
		return true;
	}
	else
	{
		return false;
	}
}	//End of CheckIsDivisible

/////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
/////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = false;						// To store the result

	printf("Enter Number\n");
	scanf("%d", &iValue);

	bRet = CheckIsDivisible(iValue);			// Method Call

	if (bRet == true)
	{
		printf("%d id Divisible by 5\n", iValue);
	}
	else
	{
		printf("%d is not Divisible by 5\n", iValue);
	}

	return 0;
}	//End if main

/////////////////////////////////////////////////////////////////////////
//
//	input1 = 15 				OutPut : True
//	input2 = 180 				OutPut : True
//	input3 = 19 				OutPut : False
//	input4 = -125 				OutPut : True
//	input5 = -3 				OutPut : False
//
/////////////////////////////////////////////////////////////////////////
