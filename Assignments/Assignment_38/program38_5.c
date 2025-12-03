///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyToggle
//  Discription :   It is used to copy characters of string into another string by 
//					converting all small characters into capital case And capital to small.
//  Input :         Character pointer,Character pointer.
//  Output :        void
//  Author :        Aditya Mali
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
	if('\0' == *src)
	{
		return;
	}

	while(*src != '\0')
	{
		if((*src) >= 'A' && *src <= 'Z')
		{
			*src = *src + 32;
		}
		else if((*src) >= 'a' && *src <= 'z')
		{
			*src = *src - 32;
		}
		*dest = *src;
		*dest++;
		src++;
	}
}	// End of StrCpyToggle

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[30] = {'\0'};
	char Brr[30] = {'\0'};

	printf("Enter the String : \t");
	scanf("%[^'\n']s",Arr);

	StrCpyToggle(Arr,Brr);

	printf("Copied string is : %s\n",Brr);

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//		Input : Marvellous Multi OS 			Output : mARVELLOUS mULTI os
//		Input : Count of White spaces is  		Output : cOUNT OF wHITE SPACES IS
//		Input : Marvel  lous Pyth on			Output : MarvellousPython
//
///////////////////////////////////////////////////////////////////////////////////////////////
