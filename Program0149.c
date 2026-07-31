/////////////////////////////////////////////////////////
//
//  Program Name  : Program0148.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 31/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

/////////////////////////////////////////////////////////
//
//  Function Name : Swap()
//  Description   : Swap the numbers
//  Input         : int , int
//  Output        : void
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 11;
    int iValue2 = 12;

    printf("Before swap : %d  %d\n",iValue1,iValue2);

    Swap(&iValue1, &iValue2);

    printf("Before swap : %d  %d\n",iValue1,iValue2);

    return 0;
}