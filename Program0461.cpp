/////////////////////////////////////////////////////////
//
//  Program Name  : Program0461.cpp
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
    float i = 0.0f, j = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter first number : \n";
    cin>>i;

    cout<<"Enter second number : \n";
    cin>>j;

    Ret = Addition(i, j);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}