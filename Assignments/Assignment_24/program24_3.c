///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Discription :   It is used to find Difference between Largest number and smallest number  
//  Input :         Address of integer Array, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;
    
    for(iCnt = 0,iMin = Arr[0], iMax = Arr[0];iCnt < iSize;iCnt++)
    {        
        if (iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }

        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return (iMax - iMin);
}   // End of Difference

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

    iRet = Difference(ptr, iSize);

    printf("Difference is : %d\n", iRet);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    16    80    66    88
//  OutPut : 72
//
//  input N : 6
//        Elements :  65     3    95   46    65    47
//  OutPut : 92
//
///////////////////////////////////////////////////////////////////////////////////////////////
