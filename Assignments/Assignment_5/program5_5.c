/////////////////////////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Discription :   It is used to Find the Largest Number  
//  Input :         Integer,Integer,Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1,int iNo2,int iNo3)
{
	int iTemp = 0;

	if (iNo1 >= iNo2)
	{
		if(iNo1 >= iNo3)
		{
			return iNo1;
		}
		else
		{
			return iNo3;
		}
	}
	else
	{
		if (iNo2 >= iNo3)
		{
			return iNo2;
		}
		else
		{
			return iNo3;
		}

	}
}	// End of FindLargest


/////////////////////////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;
	int iResult = 0;

	printf("Enter Two Number\n");
	scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

	iResult = FindLargest(iValue1,iValue2, iValue3);						// Method call
	
	printf("Largest Number is: %d\n", iResult);

}	//End of main

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : 94			input2 : 65				input3 : 99				Output : 99 
//  input1 : 65			input2 : 992			input3 : 23				Output : 992
//  input1 : 95			input2 : 95				input3 : 96				Output : 96 
//  input1 : -6			input2 : -8				input3 : -56			Output : -6
//  input1 : -65		input2 : -54			input3 : -54			Output : -54
//  input1 : -69		input2 : -98			input3 : -23			Output : -23
//
/////////////////////////////////////////////////////////////////////////////////////////////
