/////////////////////////////////////////////////////////
//
//  Program Name  : Program0455.cpp
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

int Addition(int iNo1, int iNo2)
{
    int Ans;
    Ans = iNo1+iNo2;
    return Ans;
}

int main()
{
    int i = 0, j = 0;
    int Ret = 0;

    cout<<"Enter first number : \n";
    cin>>i;

    cout<<"Enter second number : \n";
    cin>>j;

    Ret = Addition(i, j);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}