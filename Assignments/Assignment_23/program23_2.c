///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Discription :   It is used to Find the first Occurrence of Given Number in Given Array  
//  Input :         Address of integer Array, Integer, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFlag = -1;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if (Arr[iCnt] == iNo)
        {
            iFlag = iCnt;
            break;
        }
    }

    return iFlag;
}   // End of FirstOcc

//  O(N)

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

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

    iRet  = FirstOcc(ptr, iSize, iValue);

    printf("%d\n", iRet);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        No : 16
//        Elements :  85    66    16    80    66    88
//  OutPut : 1
//
//  input N : 6
//        No : 12
//        Elements :  65     80    95   46    65    47
//  OutPut : -1
//
///////////////////////////////////////////////////////////////////////////////////////////////
