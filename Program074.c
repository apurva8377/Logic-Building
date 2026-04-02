///////////////////////////////////////////////////////////////
//
//  File Name : Program74.c
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 30/12/2025
//
///////////////////////////////////////////////////////////////

// Input : 4
// Output : *   *   *   *

/*
    Start
        Accept the frequency
        Iterate from 1 to that frequency
            Display * on screen
        continue
    Stop
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enetr frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}