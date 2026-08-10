/////////////////////////////////////////////////////////
//
//  Program Name  : Program0262.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 09/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    T iAns = 0;

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
