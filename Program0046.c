/////////////////////////////////////////////////////////
//
//  Program Name  : Program46.c
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
//  Input       :       6
//  Output      :       1   2   3
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

// Wrong approach

void DisplayFactors(int iNo)
{
    if((iNo % 1) == 0)
    {
        printf("1\n");
    }
    if((iNo % 2) == 0)
    {
        printf("2\n");
    }
    if((iNo % 3) == 0)
    {
        printf("3\n");
    }
    if((iNo % 4) == 0)
    {
        printf("4\n");
    }
    if((iNo % 5) == 0)
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
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}