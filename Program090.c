///////////////////////////////////////////////////////////////
//
//  File Name : Program90.c
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 9/1/2026
//
///////////////////////////////////////////////////////////////

/*
    *	*	*	
    *	*	*	
    *	*	*	
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enetr Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enetr number of Columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}