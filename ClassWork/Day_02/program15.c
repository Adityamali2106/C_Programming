#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}   //End of CheckEvenOdd

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number:\t");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number", iValue);
    }
    else
    {
        printf("%d is Odd Number", iValue);
    }

    return 0;
}   //End of main