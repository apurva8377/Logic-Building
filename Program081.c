///////////////////////////////////////////////////////////////
//
//  File Name : Program81.c
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 9/1/2026
//
///////////////////////////////////////////////////////////////

// Input : 4
// Output : 4   *   3   *   2   *   1   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}