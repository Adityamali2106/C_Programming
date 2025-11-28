#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Dispaly
//  Description :   Dispaly Even numbers until 'N' Numbers
//  Input :         Integer
//  Output :        void
//  Author :        Aditya Vijay Mali
//  Date :          15/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo;iCnt += 2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please Enter frequency\n");
    scanf("%d",&iValue);


    Display(iValue);

    return 0;
}