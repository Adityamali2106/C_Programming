///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 

#define TRUE 1 					// Defining Micro for Boolen datatype
#define FALSE 0	

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpcial
//  Discription :   It is used Check Spcial characters form input character(!,@,#,$,%,^,&,*)
//  Input :         Character
//  Output :        Void
//  Author :        Aditya Mali
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpcial(char ch)
{

	if ((ch == '!') || (ch == '@') || (ch == '#') ||(ch == '$') || (ch == '%') ||
		(ch == '^') || (ch == '%') || (ch == '*'))
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}	//End of ChkSpcial

//  O(N)

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character : \t");
	scanf("%c",&cValue);

	bRet = ChkSpcial(cValue);

	if (bRet == TRUE)
	{
		printf("It is Spcial Character \n");
	}
	else
	{
		printf("It is Not Spcial Character \n");
	}

    return 0;
}   // End of main
