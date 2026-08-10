/////////////////////////////////////////////////////////
//
//  Program Name  : Program0265.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 09/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

double Maximum(double dNo1, double dNo2)
{
    if(dNo1 > dNo2)
    {
        return dNo1;
    }
    else
    {
        return dNo2;
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    double dValue1 = 10.0, dValue2 = 11.0, dRet = 0.0;
    
    dRet = Maximum(dValue1, dValue2);
    cout<<"Maximum : "<<dRet<<"\n";

    return 0;
}
