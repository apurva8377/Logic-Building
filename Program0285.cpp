/////////////////////////////////////////////////////////
//
//  Program Name  : Program0284.cpp
//  Description   : Problems of recursion
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;        // Auto storage class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
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
