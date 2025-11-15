///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to display all such elements which are Multiples of 11
//  Input :         Address of integer Array, Integer
//  Output :        Void
//  Author :        Aditya Mali
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elements which are multiples of 11 are : \n");
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if ((Arr[iCnt] % 11) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}   // End of Display

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

    Display(ptr, iSize);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    16    80    66    88
//  OutPut : 66    66     88
//
//  input N : 6
//        Elements :  65     80    95   46    65    47
//  OutPut : 
//
///////////////////////////////////////////////////////////////////////////////////////////////
