///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Discription :   It is used to display summation of digits of each number
//  Input :         Address of integer Array, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iSize)
{
    int iCnt1 = 0,iCnt2 = 0, iTemp = 0,iDigit = 0, iSum = 0;

    printf("Summation of digits of each Elements are : \n");
    
    for(iCnt1 = 0;iCnt1 < iSize;iCnt1++)
    {
        iTemp = Arr[iCnt1];

        for(iCnt2 = 0, iSum = 0,iDigit = 0;iTemp != 0; iCnt2++)
        {
            iDigit = iTemp % 10;
            iTemp = iTemp / 10;
            iSum = iSum + iDigit;
        }

        printf("%d\n", iSum);
    }
}   // End of DigitsSum

//  O(N)

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d", &iSize);

    ptr =(int *) malloc(iSize * sizeof(int));
    if(NULL == ptr)                                     // NULL Checking To Avoid Segmentation Folt 
    {    
        printf("Unable to Allocate memory");
        return -1;
    }
       
    printf("Enter the Elements : \n");

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter element %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    DigitsSum(ptr, iSize);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    16    80    66    88
//  OutPut : 13    12    7    8    12    16
//
//  input N : 6
//        Elements :  65     80    95   46    65    47
//  OutPut : 11    8    14    10    11    11
//
///////////////////////////////////////////////////////////////////////////////////////////////
