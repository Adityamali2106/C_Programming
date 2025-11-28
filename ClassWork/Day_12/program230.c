#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountSmall++;
        }
        else
        {
            iCountCapital++;
        }

        str++;
    }

    printf("Number of all Small caracters are : %d \n",iCountSmall);
    printf("NUmber of all Capital caracters are : %d \n",iCountCapital);
}   // End of Display


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
}