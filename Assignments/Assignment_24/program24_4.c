///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 
#include<stdlib.h>              // For Dynamic Memory alocarion deallocation

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Discription :   It is used to display all such numbers which contains 3 Digits in it
//  Input :         Address of integer Array, Integer
//  Output :        Integer
//  Author :        Aditya Mali
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt1 = 0,iCnt2 = 0, iTemp = 0;

    printf("Numbers that Contains 3 Digits in it are : \n");
    
    for(iCnt1 = 0;iCnt1 < iSize;iCnt1++)
    {
        iTemp = Arr[iCnt1];

        for(iCnt2 = 0;iTemp != 0; iCnt2++)
        {
            iTemp = iTemp /10;
        }

        if (iCnt2 == 3)
        {
            printf("%d\n", Arr[iCnt1]);
        }
    }
}   // End of Digits

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

    Digits(ptr, iSize);

    free(ptr);
    ptr = NULL;                                         // To Avoid Dangling pointer
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input N : 6
//        No : 16
//        Elements :  8582    66    165    80    668    88
//  OutPut : 165    668
//
//  input N : 6
//        No : 12
//        Elements :  65     80    958   46    65    47
//  OutPut : 958
//
///////////////////////////////////////////////////////////////////////////////////////////////
