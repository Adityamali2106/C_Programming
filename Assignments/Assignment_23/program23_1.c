/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation


#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Discription :   It is used to Check the Given Number is present in Given Array or not  
//  Input :         Address of integer Array, Integer, Integer
//  Output :        BOOLEN
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    BOOL bFlag = FALSE
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if (Arr[iCnt] == iNo)
        {
            bFlag =  TRUE;
        }
    }

    return bFlag;
}   // End of Check

//  O(N)

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iValue = 0,iCnt = 0; 
    BOOL bRet = 0;
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

    bRet  = Check(ptr, iSize, iValue);

    if (bRet == true)
    {
        printf("%d is Present", iValue);
    }
    else
    {
        printf("%d is Absent", iValue);        
    }

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        No : 16
//        Elements :  85    66    16    80    93    88
//  OutPut : TRUE
//
//  input N : 8
//        No : 12
//        Elements :  65     80    95   46    65    47    61    21
//  OutPut : FALSE
//
/////////////////////////////////////////////////////////////////////////////////////////////
