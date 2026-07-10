/////////////////////////////////////////////////////////
//
//  Program Name  : Program45.c
//  Description   : It is used to display factors.
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
//  Function Name :     CheckDivisible()
//  Description :       Used to display Factors
//  Input       :       ---
//  Output      :       1   2   3
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void DisplayFactors()
{
    if((6 % 1) == 0)
    {
        printf("1\n");
    }
    if((6 % 2) == 0)
    {
        printf("2\n");
    }
    if((6 % 3) == 0)
    {
        printf("3\n");
    }
    if((6 % 4) == 0)
    {
        printf("4\n");
    }
    if((6 % 5) == 0)
    {
        printf("5\n");
    }
}
/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int ivalue = 0;

    //printf("Enter number : \n");
    //scanf("%d",&iValue);

    DisplayFactors();

    return 0;
}