//////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation
#include<stdbool.h>             // For Boolean Datatype

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Discription :   It is used to check in given array contains 11 or not  
//  Input :         Address of integer Array, Integer
//  Output :        Boolean
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if (Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}   // End of Check

//  O(N)

///////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0;
    bool bRet = false;
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

    bRet  = Check(ptr, iSize);

    if (bRet == true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");        
    }

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    11    80    93    88
//  OutPut : 11 is Present
//
//  input N : 8
//        Elements :  6     80    95   46    7     47    61    32
//  OutPut : 11 is Absent
//
////////////////////////////////////////////////////////////////////////////////////////////
