/////////////////////////////////////////////////////////
//
//  Program Name  : Program0462.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 04/09/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

template <class T>
T Addition(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1+iNo2;
    return Ans;
}

int main()
{
    cout<<"Addition of characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of integers : "<<Addition(11,10)<<"\n";
    cout<<"Addition of floats : "<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of doubles : "<<Addition(78.67897,45.76454)<<"\n";

    return 0;
}