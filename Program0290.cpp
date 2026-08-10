/////////////////////////////////////////////////////////
//
//  Program Name  : Program0290.cpp
//  Description   : Problems of recursion
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        cout<<"Jay Ganesh...\n";
        iCnt++;
        Display();
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}
