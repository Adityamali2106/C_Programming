#include<stdio.h>

int CountSmall(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr, cValue);

    printf("Number Occurences are are : %d", iRet);

    return 0;
}