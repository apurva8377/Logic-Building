/////////////////////////////////////////////////////////
//
//  Program Name  : Program0067.c
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
//  Function Name :     DisplayDigits()
//  Description :       Used to display digits frm number
//  Input       :       4235
//  Output      :       5   3   2   4
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    printf("--------------------------------------\n");
    printf("Original value of iNo is : %d\n",iNo);

    while (iNo != 0)
    {
        printf("--------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }
    
    printf("--------------------------------------\n");
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

    DisplayDigits(iValue);

    return 0;
}