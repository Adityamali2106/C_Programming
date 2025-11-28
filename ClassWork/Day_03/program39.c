#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Display
//  Description :   Display n numbers in revrese order
//  Input :         Integer
//  Output :        Void
//  Author :        Aditya Vijay Mali
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Please Enter frequency\n");
    scanf("%d",&iValue);


    Display(iValue);

    return 0;
}