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
//  Function Name : CountWhite
//  Discription :   It is used to check whether given character is present in string or not
//  Input :         Character pointer
//  Output :        Boolean
//  Author :        Aditya Mali
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckChar(char *str, char ch)
{
	BOOL flag = FALSE;

	if(*str == '\0')
	{
		return FALSE;
	}

	while(*str != '\0')
	{
		if ((*str) == ch)
		{
			flag = TRUE;
		}
		*str++;
	}

	return flag;
}	// End of CountWhite

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[50] = {'\0'};
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the String : \t");
	scanf("%[^'\n']s",Arr);

	printf("Enter the Character\n");
	scanf(" %c",&cValue);

	bRet = CheckChar(Arr,cValue);

	if (bRet == TRUE)
	{
		printf("Character found\n");
	}
	else
	{
		printf("Character not found\n");
	}

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input : Marvellous Multi OS 		Input 2 : e			Output : TRUE
//		Input : Marvellous Multi OS			Input 2 : W  		Output : FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////
