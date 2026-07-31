/////////////////////////////////////////////////////////
//
//  Program Name  : Program0112.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description   : To display the array
//  Input         : int
//  Output        : void
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

void Display(int *ptr)  // Issue
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\t",*ptr);
    }

    printf("\n");
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);

    return 0;
}