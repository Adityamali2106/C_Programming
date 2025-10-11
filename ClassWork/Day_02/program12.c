/*
    Start
        Accept number and store as no
        Devide no by 2
        If the remender is 0 
            Then display as Even 
        Otherwise 
            Display as Odd
    Stop
*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}   //End of CheckEvenOdd

int main()
{
    int iValue = 0;

    printf("Enter a Number:\t");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);


    return 0;
}   //End of main