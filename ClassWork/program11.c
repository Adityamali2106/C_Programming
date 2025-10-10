/*
    Algorithm

    START
            Accept Frist number as no1
            Accept Secound number as no2
            if the input is negative convert it into positive
            Perform addition of no1 & no2
            Display the addition on screen
    STOP

*/

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header Files
// 
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Aditya Vijay Mali
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                     // First input
                            float fNo2                      // Second input
                        )
{
    float fSum = 0.0f;                                      // To Store the result
    
    if(fNo1 < 0.0f)                                         // updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                         //updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                     //Business Logic

    return fSum;
}   // End of AdditionTwoNumber

//////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the application
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;                   // To accept user input
    float fRet = 0.0f;                                      // To Store the result

    printf("Enter First Number \n");
    scanf("%f",&fValue1);
    
    printf("Enter Second Number \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);             // Method Call

    printf("Addition is : %f \n",fRet);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlded by  the application
//  input1 : 10.5       input2 : 3.2        output : 13.7
//  input1 : 10.5       input2 : -3.2        output : 13.7
//  input1 : -10.5       input2 : 3.2        output : 13.7
//  input1 : -10.5       input2 : -3.2        output : 13.7
//  input1 : 10.5       input2 : 0.0        output : 10.5
//
//////////////////////////////////////////////////////////////////////////////////////
