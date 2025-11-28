#include<stdio.h>
#include<stdbool.h>

bool CHeckPrime(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if (iFrequency == 0)                            //NO Factors
    {
        return true;
    }
    else                                            // Atlist one Factor
    {
        return false;
    }
    
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
