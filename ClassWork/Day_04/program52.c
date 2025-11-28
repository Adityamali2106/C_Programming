#include<stdio.h>

int CountNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

// O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountNonFactors(iValue);

    printf("Number of Non factors are : %d \n", iRet);

    return 0;
}