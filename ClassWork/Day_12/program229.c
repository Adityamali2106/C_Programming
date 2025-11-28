#include<stdio.h>

int CountCapital(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr, cValue);

    printf("Number of capital characters are : %d", iRet);

    return 0;
}