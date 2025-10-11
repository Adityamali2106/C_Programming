#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    if(iRem == 0)
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

    printf("Result is : %d", bRet);


    return 0;
}   //End of main