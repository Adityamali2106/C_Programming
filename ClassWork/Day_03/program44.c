#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Dispaly
//  Description :   It is usend to Check Given first number is completly divisible by second number or not
//  Input :         Integer, Integer
//  Output :        Boolen
//  Author :        Aditya Vijay Mali
//  Date :          15/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1,int iNo2)
{
    if ((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    } 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);
    printf("Enter Secound Number\n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if (bRet == true)
    {
        printf("It is completly Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }
    
    return 0;
}