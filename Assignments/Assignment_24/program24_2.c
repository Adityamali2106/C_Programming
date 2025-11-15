///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Discription :   It is used to find Largest number From array  
//  Input :         Address of integer Array, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    
    for(iCnt = 0,iMin = Arr[iCnt];iCnt < iSize;iCnt++)
    {        
        if (iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}   // End of Maximum

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

    iRet = Maximum(ptr, iSize);

    printf("Largest Number is : %d\n", iRet);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        Elements :  85    66    16    80    66    88
//  OutPut : 16
//
//  input N : 6
//        Elements :  65     80    95   3    65    47
//  OutPut : 3
//
///////////////////////////////////////////////////////////////////////////////////////////////
