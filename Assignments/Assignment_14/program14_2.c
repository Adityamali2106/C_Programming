////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                               // For Input Output

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Discription :   It is used to ckeck whether the given number contains 0 in it or not
//  Input :         Integer
//  Output :        Boolen
//  Author :        Aditya Mali
//  Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}  //End of ChkZero

//  O(N)

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}   //End if main

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input = 12                      Output : There is no Zero
//
//  input = 2395                    Output : There is no Zero
//
//  input = -2395                   Output : There is no Zero
//
//  input = 9000                    OutPut : It Contains Zero
//
//  input = 1018                    OutPut : It Contains Zero
//
////////////////////////////////////////////////////////////////////////////////////////////
