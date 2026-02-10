///////////////////////////////////////////////////////////////////////////////////////////////
//
//      Required Hider Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name 	: WhiteSpace
//  Discription 	: It is used to Count the Small characters in a string, Recursively
//  Input 			: String 
//  Output 			: Count of Small characters
//  Author 			: Aditya Vijay Mali
//  Date 			: 07/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Small(char *str)
{
    static int iCnt = 0,iCount = 0; 
    
    if(str[iCnt] != '\0')
    {
        if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iCount++;
        }
        iCnt++;
        Small(str);
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    iRet = Small(arr);

    printf("Total number of Small characters in a string are : %d\n",iRet);

    return 0;
}