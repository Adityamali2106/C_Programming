///////////////////////////////////////////////////////////////////////////////////////
//
//	Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Discription :   It is used to check the given character is vowel(a,e,i,o,u) or not
//  Input :         Character
//  Output :        Boolen
//  Author :        Aditya Mali
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
	if (cValue == 'a'|| cValue == 'e'|| cValue == 'i'|| cValue == 'o'|| cValue == 'u'
		|| cValue == 'A'|| cValue == 'E'|| cValue == 'I'|| cValue == 'O'|| cValue == 'U')								
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}	//End of ChkVowel

///////////////////////////////////////////////////////////////////////////////////////
//
//	Entery point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter Character\n");							// Accept a character From user
	scanf("%c", &cValue);

	bRet = ChkVowel(cValue);								// Method Call

	if (bRet == TRUE)
	{
		printf("It is Vowel\n");
	}
	else
	{
		printf("It is Not Vowel\n");
	}
	return 0;
}	// End of main

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : a				output : A  
//  input2 : D				output : d
//  input3 : 4				output : 2  4  6  8
//  input4 : 0				output : 
//
///////////////////////////////////////////////////////////////////////////////////////
