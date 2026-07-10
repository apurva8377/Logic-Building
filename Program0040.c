/////////////////////////////////////////////////////////
//
//  Program Name :  Program40.c
//  Discription  :  Program to display (using loops)
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
//  Description :       It is used to display 5 "*" on console
//  Input :             10
//  Output :            2   4   6   8   10
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void Dipslay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt+2)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("please enter frequency : \n");
    scanf("%d",&iValue);

    Dipslay(iValue);

    return 0;
}