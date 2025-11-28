#include<stdio.h>
#include<stdbool.h>

bool CHeckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;                                  // Optimization
        }
    }

    return bFlag;
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CHeckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is Prime Number", iValue);
    }
    else
    {
        printf("%d is Not a Prime Number", iValue);
    }  

    return 0;
}

/*
    Time Complexity : for prime N/2
    Time Complexity : fpr Non prime - either 1 or 2
*/
