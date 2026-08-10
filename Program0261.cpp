/////////////////////////////////////////////////////////
//
//  Program Name  : Program0261.cpp
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 09/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Add(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;
    
    iRet = Add(iValue1, iValue2);

    cout<<iRet<<"\n";

    return 0;
}
