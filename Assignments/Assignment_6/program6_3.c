/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output
#include <stdbool.h>							// For Boolen

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Discription :   It is used to check given Two Numbers are equal or not
//  Input :         Integer, Integer
//  Output :        Boolen
//  Author :        Aditya Mali
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
	if (iNo1 == iNo2)								
	{
		return true;
	}
	else
	{
		return false;
	}
}	//End of CheckEqual

///////////////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	bool bRet = false;								// To store the result

	printf("Pease Enter two Number\n");
	scanf("%d %d", &iValue1,&iValue2);

	bRet = CheckEqual(iValue1,iValue2);			// Method Call

	if (bRet == true)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}

	return 0;
}	//End if main

///////////////////////////////////////////////////////////////////////////////////
//
//	input1 = 15				input2 : 15 				OutPut : true
//	input1 = 10				input2 : 15 				OutPut : False
//	input1 = 12 			input2 : -12				OutPut : False
//
///////////////////////////////////////////////////////////////////////////////////
