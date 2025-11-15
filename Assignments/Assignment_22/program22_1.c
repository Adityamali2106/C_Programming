//////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Discription :   It is used to Count Frequency of Even number 
//  Input :         Address of integer Array, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if ((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}   // End of CountEven

//  O(N)

///////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

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
        scanf("%d",&ptr[iCnt]);
    }

    iRet  = CountEven(ptr, iSize);

    printf("Result is : %d \n", iRet);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    3    80    93    88
//  OutPut : 3
//
//  input N : 8
//        Elements :  6     80    95   46    7     47    -61    -32
//  OutPut : 4
//
////////////////////////////////////////////////////////////////////////////////////////////
