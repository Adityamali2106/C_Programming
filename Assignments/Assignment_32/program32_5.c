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
//  Date :          22/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input");
        printf("Row and columan number should be same");
        return;
    }


    for (i = 1; i <= iRow; i++)
    {
       for(j = 1; j <= iCol; j++)
       {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
       }
       printf("\n");
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
//  input1 : 5
//  input2 : 5
//  Output : 
//              1       2       3       4       5
//              1       2                       5
//              1               3               5
//              1                       4       5
//              1       2       3       4       5
//
///////////////////////////////////////////////////////////////////////////////////////////////
