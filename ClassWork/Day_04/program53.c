#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency1 = 0;
    int iFrequency2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }

    printf("Number of factors are : %d \n",iFrequency1);
    printf("Number of Non factors are : %d \n",iFrequency2);

}   // End of Count

// O(N)

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}