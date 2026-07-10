/////////////////////////////////////////////////////////
//
//  Program Name :  Program42.c
//  Discription  :  This program is used to display the table of 2
//  Function     :  Display()
//  Author       :  Apurva Vilas Shinde
//  Date         :  10/07/2026
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
//  Function Name :     Display()
//  Description :       It is used to display 
//  Input :             10
//  Output :            2   4   6   8   10
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

    printf("\n");
}

// Time complexity = 0(N)

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Please enter frequency: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}