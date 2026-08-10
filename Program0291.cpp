/////////////////////////////////////////////////////////
//
//  Program Name  : Program0291.cpp
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
    auto i = 1;

    if(iCnt <= 3)
    {
        cout<<"Jay Ganesh..."<<iCnt<<" "<<i<<"\n";
        iCnt++;
        i++;
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
