/////////////////////////////////////////////////////////
//
//  Program Name  : Program0264.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 09/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;
    
    iRet = Maximum(iValue1, iValue2);
    cout<<"Maximum : "<<iRet<<"\n";

    return 0;
}
