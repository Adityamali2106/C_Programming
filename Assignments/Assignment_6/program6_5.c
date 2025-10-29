/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Discription :   It is used to Calculate Percentage
//  Input :         Integer, Integer
//  Output :        flotting point number
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
	float fAns = 0.0f;
	
	if (iNo1 == 0)								
	{
		return fAns;
	}
	else if (iNo2 == 0)								
	{
		return fAns;
	}
	
	fAns = ((float) iNo2 / iNo1) * 100;
	
	return fAns;
	
}	//End of Percentage

///////////////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	float fRet = 0.0f;								// To store the result

	printf("Pease Enter Total Marks\n");
	scanf("%d", &iValue1);

	printf("Pease Enter Obtained Marks\n");
	scanf("%d", &iValue2);

	fRet = Percentage(iValue1,iValue2);			// Method Call

	printf("the Multiplication is: %.1f%% \n", fRet);

	return 0;
}	//End if main

///////////////////////////////////////////////////////////////////////////////////
//
//	input1 = 1000				input2 : 745			OutPut : 74.5%
//	input1 = 1000				input2 : 0				OutPut : 0.0%
//	input1 = 0					input2 : 100			OutPut : 0.0%
//
///////////////////////////////////////////////////////////////////////////////////
