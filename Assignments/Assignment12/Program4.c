/////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                               // For Input Output

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumofEvenFactors
//  Discription :   It is used to Calculate Sum of Even Factors of Given Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////////

int SumofEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }  

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if ((iNo% iCnt ) == 0 && (iCnt %2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}  //End of SumofEvenFactors

///////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    printf("%d\n",SumofEvenFactors(iValue));

    return 0;
}   //End if main

///////////////////////////////////////////////////////////////////////////////////
//
//  input = 12                   OutPut : 12
//  input = -12                  OutPut : 12
//  input = 15                   OutPut : 0
//  input = 13                   OutPut : 0
//  input = 26                   OutPut : 2
//
///////////////////////////////////////////////////////////////////////////////////
