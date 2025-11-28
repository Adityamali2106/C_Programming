#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : DispalyFactors
//  Description :   It is used to Display Factors of the given number
//  Input :         Integer
//  Output :        Void
//  Author :        Aditya Vijay Mali
//  Date :          15/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }  

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo% iCnt ) == 0)
        {
            printf(" %d \n",iCnt);
        }
    }
}   // End of DisplayFactors

// O(N)

int main()
{
    int iValue = 0;
    
    printf("Enter First Number\n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    return 0;
}