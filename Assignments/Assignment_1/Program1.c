/////////////////////////////////////////////////////////////////////////
//
//	Required header Files
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Discription :   It is used to perform Division
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          15/10/2025
//
/////////////////////////////////////////////////////////////////////////

int Divide(
				int iNo1,					// First Input
				int iNo2					// Secound Input
		  )
{
	int iAns = 0;							// To store the result

	if (iNo2 == 0)							// to check it is not divide by zero
	{
		return -1;
	}

	iAns = iNo1 / iNo2;						// Business Logic

	return iAns;
}	//End of Divide

/////////////////////////////////////////////////////////////////////////
//
//	Entory Point Function for the application
//
/////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 15,iValue2 = 5;			// To Store the values  
	int iRet = 0;							// To store the result

	iRet = Divide(iValue1,iValue2);			// Method Call

	printf("Division is : %d\n", iRet);

	return 0;
}	//End if main
