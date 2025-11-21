///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               // For Input Output 

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Discription :   It is used to display the pattern 
//  Input :         Integer, Integer
//  Output :        Void
//  Author :        Aditya Mali
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 0;

    iCount = 1;
    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)
        {
            for(j = 1, iCount = 2; j <= iCol; j++, iCount= iCount+2)
            {
                printf("%d \t", iCount);
            }
            printf("\n");
        } 
        else
        {
            for(j = 1, iCount = 1; j <= iCol; j++, iCount= iCount+2)
            {
                printf("%d \t", iCount);
            }
            printf("\n");
        }   
    }
}   // End of Pattern

//  O(N)

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entory Point Function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  input1 : 4
//  input2 : 6
//  Output : 
//                2       4       6       8       10      12
//                1       3       5       7       9       11
//                2       4       6       8       10      12
//                1       3       5       7       9       11
//
///////////////////////////////////////////////////////////////////////////////////////////////
