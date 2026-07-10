/////////////////////////////////////////////////////////
//
//  Program Name :  Program25.c
//  Discription  :  Program to display "Jay ganesh" on console using Loop.
//  Function     :  Display()
//  Input        :  
//  Output       :  Jay Ganesh
//                  Jay ganesh
//                  Jay ganesh
//                  jay Ganesh
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
//  Description :       It is used to display 4 times "Jay Ganesh" on console
//  Input :             
//  Output :            Jay Ganesh
//                      Jay ganesh
//                      Jay ganesh
//                      jay Ganesh
//  Author :            Apurva Vilas Shinde
//  Date :              9/07/2026
//
/////////////////////////////////////////////////////////////

// Static function

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
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
    Display();

    return 0;
}