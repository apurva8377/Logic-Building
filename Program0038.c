/////////////////////////////////////////////////////////
//
//  Program Name :  Program38.c
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
//  Input :             5
//  Output :            5   4   3   2   1   
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void Dipslay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
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