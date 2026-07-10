/////////////////////////////////////////////////////////
//
//  Program Name :  Program33.c
//  Discription  :  Program to display "Jay ganesh" on console using Loop.
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
//  Input :             5
//  Output :            1   *   2   *   3   *   4   *   5   *
//  Author :            Apurva Vilas Shinde
//  Date :              9/07/2026
//
/////////////////////////////////////////////////////////////

void Dipslay()
{
    int iCnt = 0;
    
    //      1         2        3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t*\t",iCnt);  // 4
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
    Dipslay();

    return 0;
}