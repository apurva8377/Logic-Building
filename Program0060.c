/////////////////////////////////////////////////////////
//
//  Program Name  : Program0060.c
//  Description   : Problems on digits
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iNo = 7345;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    return 0;
}