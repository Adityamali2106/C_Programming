///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Discription :   It is used to Find the given character in given string and
//					return its first occurrence.
//  Input :         Character pointer, Character.
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CheckChar(char *str, char ch)
{
	int iCnt = -1;

	if(*str == '\0')
	{
		return 0;
	}

	while(*str != '\0')
	{
		iCnt++;

		if((*str) == ch)
		{
			break;
		}
		*str++;
	}

	if (*str == ch)
	{
		return iCnt;
	}

	return -1;	
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
	int iRet = 0;

	printf("Enter the String : \t");
	scanf("%[^'\n']s",Arr);

	printf("Enter the Character\n");
	scanf(" %c",&cValue);

	iRet = CheckChar(Arr,cValue);

	printf("Character Location is : %d\n",iRet);

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input : Marvellous Multi OS 			Inputb 2 :	M				Output : Character Location is : 0
//		Input : Marvellous Multi OS 			Inputb 2 :	W				Output : Character Location is : -1
//
///////////////////////////////////////////////////////////////////////////////////////////////
