//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Discription :   It is used to check the given number is even or odd
//  Input :         Integer
//  Output :        Boolen
//  Author :        Aditya Mali
//  Date :          23/10/2025
//
//////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
	if ((iNo % 2) == 0)									// Check the number is divisible by 2
	{
		return true;
	}
	else
	{
		return false;
	}

}	// End of CheckEvenOdd

//////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
//////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet = CheckEvenOdd(iValue);						// Method call

	if (bRet == true)
	{
		printf("Given number is Even \n");
	}
	else
	{
		printf("Given number is Odd \n");
	}

	return 0;
}	//End of main

//////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : 14				output : Given number is Even
//  input2 : 25				output : Given number is Odd
//  input3 : -12			output : Given number is Even
//  input4 : -55			output : Given number is odd
//
//////////////////////////////////////////////////////////////////////////

