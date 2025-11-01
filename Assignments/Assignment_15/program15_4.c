////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                               // For Input Output

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Discription :   It is used to perform multiplecation on digits.
//  Input :         Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMultDigits = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iMultDigits = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit != 0)
        {
           iMultDigits = iMultDigits * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMultDigits;
}  //End of MultDigits

//  O(N)

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);
    return 0;
}   //End if main

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input = 2395                        OutPut : 270
//
//  input = 922432                      OutPut : 864
//
//  input = 8462                        OutPut : 384
//
//  input = 81018                       OutPut : 64
//
////////////////////////////////////////////////////////////////////////////////////////////
