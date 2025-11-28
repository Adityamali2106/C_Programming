///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 

#define TRUE 1
#define FALSE 0

typedef int BOOL;
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Discription :   It is used check the string contains vowels in it or not.
//  Input :         Character
//  Output :        void
//  Author :        Aditya Mali
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
	if(*str == '\0')
	{
		return FALSE;
	}

	while(*str != '\0')
	{
		 if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
		{
			break;
		}

		*str++;
	}	

	if (*str == '\0')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}	// End of ChkVowel

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[50] = {'\0'};
	BOOL bRet = FALSE;

	printf("Enter the character : \t");
	scanf("%[^'\n']s",Arr);

	bRet = ChkVowel(Arr);

	if (bRet == TRUE)
	{
		printf("Contains Vowel \n");
	}
	else
	{
		printf("There is no Vowel \n");
	}
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input : Marvellous Multi OS 			Output : Contains Vowel 
//		Input : ADityA  						Output : Contains Vowel
//		Input : 								Output : Theree is no Vowel
//		Input : xyz								Output : Theree is no Vowel
//
///////////////////////////////////////////////////////////////////////////////////////////////
