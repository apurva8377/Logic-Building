/////////////////////////////////////////////////////////
//
//  Program Name  : Program0458.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

double Addition(double iNo1, double iNo2)
{
    double Ans;
    Ans = iNo1+iNo2;
    return Ans;
}

int main()
{
    double i = 0.0, j = 0.0;
    double Ret = 0.0;

    cout<<"Enter first number : \n";
    cin>>i;

    cout<<"Enter second number : \n";
    cin>>j;

    Ret = Addition(i, j);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}