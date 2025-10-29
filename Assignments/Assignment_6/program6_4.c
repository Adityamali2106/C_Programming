/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Discription :   It is used to check given Two Numbers are equal or not
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
	if ((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))				// All three vriables are zero then return 0
	{
		return 0;
	}

	///////////////////////////////////////////////////////////////////////////////////
	//
	//	Checking any one or more than one number is equal to zero then assign that 
	//	Number with 1 for result 
	//
	///////////////////////////////////////////////////////////////////////////////////
	if (iNo1 == 0)								
	{
		iNo1 = 1;
	}
	
	if (iNo2 == 0)								
	{
		iNo2 = 1;
	}
	
	if (iNo3 == 0)								
	{
		iNo3 = 1;
	}
	
	return iNo1 * iNo2 * iNo3;
	
}	//End of Multiply

///////////////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;
	int iRet = 0;								// To store the result

	printf("Pease Enter Three Number\n");
	scanf("%d %d %d", &iValue1,&iValue2,&iValue3);

	iRet = Multiply(iValue1,iValue2,iValue3);			// Method Call

	printf("the Multiplication is: %d\n", iRet);

	return 0;
}	//End if main

///////////////////////////////////////////////////////////////////////////////////
//
//	input1 = 15			input2 : 15			input3 : 0 				OutPut : 225
//	input1 = 36			input2 : 0			input3 : 25 			OutPut : 900
//	input1 = 0			input2 : 21			input3 : 96				OutPut : 2016
//	input1 = 0			input2 : 0			input3 : 0 				OutPut : 0
//	input1 = 56			input2 : 0			input3 : 0 				OutPut : 56
//	input1 = 14			input2 : 39			input3 : 0 				OutPut : 546
//
///////////////////////////////////////////////////////////////////////////////////
