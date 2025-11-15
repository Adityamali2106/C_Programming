///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Discription :   It is used to Display all Element of given Range From array  
//  Input :         Address of integer Array, Integer, Integer
//  Output :        Void
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0, iTemp = -1;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {        
        if ((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}   // End of Range

//  O(N)

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iValue1 = 0,iValue2 = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d", &iSize);

    printf("Enter the starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter the Ending Point : ");
    scanf("%d", &iValue2);

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

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        No : 70     90
//        Elements :  85    66    16    80    66    88
//  OutPut : 85    80    88
//
//  input N : 6
//        No : 60    80
//        Elements :  65     80    95   46    65    47
//  OutPut : 65    65
//
///////////////////////////////////////////////////////////////////////////////////////////////
