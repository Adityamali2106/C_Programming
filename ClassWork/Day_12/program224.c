#include<stdio.h>

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}   // End of Display


int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf("%c", &cValue);                       // Issue

    iRet = CountOccurance(Arr, cValue);

    printf("Number Occurences are are : %d", iRet);

    return 0;
}