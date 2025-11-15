//////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Discription :   It is used to Count the frequency of Given Number in Given Array  
//  Input :         Address of integer Array, Integer, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}   // End of Frequency

//  O(N)

///////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iValue = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

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

    iRet  = Frequency(ptr, iSize, iValue);

    printf("%d\n", iRet);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        No : 16
//        Elements :  85    66    16    80    93    88
//  OutPut : 1
//
//  input N : 8
//        No : 65
//        Elements :  65     80    95   46    65    47    61    21
//  OutPut : 2
//
////////////////////////////////////////////////////////////////////////////////////////////
