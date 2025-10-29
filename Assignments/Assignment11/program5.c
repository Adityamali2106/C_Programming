//////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Discription :   It is used to print All Numbers between Range of 
//					given two number
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}
	for(;iEnd >= iStart; iEnd--)
	{
		printf("%d\t", iEnd);
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

	RangeDisplay(iValue1,iValue2);								// Method Call

	return 0;
}	// End of main

//////////////////////////////////////////////////////////////////////////////////////////
//
//	Input1 : 23
//	Input2 : 35
//	Output : 35      34      33      32      31      30      29      28      27      26
//		     25      24      23
//
//	Input1 : 11			Input2 : 11			 	output: 11
//
//	Input1 : -10
//	Input2 : 2
//	Output : 2       1       0       -1      -2      -3      -4      -5      -6      -7
//		     -8      -9      -10
//
//	Input1 : 98
//	Input2 : 56
//	Output : Invalid Range
//
//////////////////////////////////////////////////////////////////////////////////////////
