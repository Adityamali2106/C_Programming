#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 1)
        {
            iCount++;
        }
    }

    return iCount;
}   // End of Display

int main()
{
    int iLength = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d", &iLength);

    ptr =(int *) malloc(iLength * sizeof(int));
    if(NULL == ptr)          // Industrial way of coding
    {    
        printf("Unable to Allocate memory");
        return -1;
    }
       
    printf("Enter the Elements : \n");

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet  = CountOdd(ptr, iLength);

    printf("Numbers of Odd Elements Are : %d \n", iRet);

    free(ptr);
    
    return 0;
}