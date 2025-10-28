/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>								// For Input Output

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to Print the digit into word
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Mali
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	if (iNo < 0)								// Updater
	{
		iNo = -iNo;
	}

	switch(iNo)
	{
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 6:
			printf("Six\n");
			break;
		case 7:
			printf("Seven\n");
			break;
		case 8:
			printf("Eight\n");
			break;
		case 9:
			printf("Nine\n");
			break;
		default :
			printf("Invalid Number\n");
	}
}	//End of Display

///////////////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d", &iValue);

	Display(iValue);			// Method Call

	return 0;
}	//End if main

///////////////////////////////////////////////////////////////////////////////////
//
//	input = 5					OutPut : Five
//	input = 16					OutPut : Invalid Number
//	input = -9					OutPut : Nine
//
///////////////////////////////////////////////////////////////////////////////////
