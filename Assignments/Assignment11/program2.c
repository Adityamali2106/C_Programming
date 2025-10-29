//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Discription :   It is used to print All Even Numbers between Range of 
//					given two number
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}
	for(;iStart <= iEnd; iStart++)
	{
		if ((iStart %2 )== 0)
		{
			printf("%d\t", iStart);	
		}
		
	}
}	//End of RangeDisplay

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

	printf("Enter Starting point\n");						// Accept a Number From user
	scanf("%d", &iValue1);

	printf("Enter Ending point\n");						// Accept a Number From user
	scanf("%d", &iValue2);

	RangeDisplayEven(iValue1,iValue2);								// Method Call

	return 0;
}	// End of main

//////////////////////////////////////////////////////////////////////////////////////////
//
//	Input1 : 23
//	Input2 : 35
//	Output : 24      26      28      30      32      34
//
//	Input1 : 11			Input2 : 11			 	output: 
//
//	Input1 : -9
//	Input2 : 2
//	Output : -8      -6      -4      -2      0       2
//
//	Input1 : 98
//	Input2 : 56
//	Output : Invalid Range
//
//////////////////////////////////////////////////////////////////////////////////////////
