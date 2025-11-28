#include<stdio.h>

int CountSmall(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    fflush(stdin);                                  // Not Applicable on all OS

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    iRet = CountSmall(Arr, cValue);

    printf("Number Occurences are are : %d", iRet);

    return 0;
}