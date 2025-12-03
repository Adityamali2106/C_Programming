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
//  Discription :   It is used to Find the given character in given string and
//					return its Last occurrence.
//  Input :         Character pointer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CheckChar(char *str, char ch)
{
	int iCnt = -1;
	int iFrequency = -1;

	if(*str == '\0')
	{
		return iFrequency;
	}

	while(*str != '\0')
	{
		iCnt++;

		if((*str) == ch)
		{
			iFrequency = iCnt;
		}
		str++;
	}

	return iFrequency;	
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

	printf("Character Frequency is : %d\n",iRet);

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input : Marvellous Multi OS 			Inputb 2 :	M				Output : Character Location is : 11
//		Input : Marvellous Multi OS 			Inputb 2 :	W				Output : Character Location is : -1
//
///////////////////////////////////////////////////////////////////////////////////////////////
