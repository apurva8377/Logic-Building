/////////////////////////////////////////////////////////
//
//  Program Name :  Program27.c
//  Discription  :  Program to display "Jay ganesh" on console using Loop.
//  Function     :  Display()
//  Author       :  Apurva Vilas Shinde
//  Date         :  09/07/2026
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
//  Description :       It is used to display no. of times "Jay Ganesh" on console
//  Input :             4
//  Output :            Jay Ganesh
//                      Jay ganesh
//                      Jay ganesh
//                      jay Ganesh
//  Author :            Apurva Vilas Shinde
//  Date :              9/07/2026
//
/////////////////////////////////////////////////////////////

// Dynamic function

void Display(int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}