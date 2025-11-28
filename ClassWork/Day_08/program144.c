#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

// < O(N)

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;                         // Unable to handle negative values
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR) malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the number to Search : \n");
    scanf("%d",&iValue);

    // Step 2 : Use the memory
    iRet = Maximum(iPtr,iLength,iValue);

    printf("Maximum Number is %d", iRet)
    // Step 3 : Free the memory

    free(iPtr);
    
    return 0;
}