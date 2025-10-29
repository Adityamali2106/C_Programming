//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Discription :   It is used to print All Numbers between Range of 
//					given two number
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
	int iAdd = 0;
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}
	else if(iStart < 0)
	{
		printf("Invalid Range\n");
		return 0;
	}

	for(;iStart <= iEnd; iStart++)
	{
		iAdd = iAdd + iStart;
	}
	return iAdd;
}	//End of RangeSum

// O(N)

//////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
//////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter Starting point\n");						
	scanf("%d", &iValue1);

	printf("Enter Ending point\n");						
	scanf("%d", &iValue2);

	iRet = RangeSum(iValue1,iValue2);								// Method Call

	if(iRet != 0)
	{
		printf("Addition is %d\n", iRet);
	}
	return 0;
}	// End of main

//////////////////////////////////////////////////////////////////////////////////////////
//
//	Input1 : 23
//	Input2 : 35
//	Output : 377
//
//	Input1 : 11			Input2 : 11			 	output: 11
//
//	Input1 : -9
//	Input2 : 2
//	Output : Invalid Range
//
//	Input1 : 98
//	Input2 : 56
//	Output : Invalid Range
//
//////////////////////////////////////////////////////////////////////////////////////////
