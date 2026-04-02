/////////////////////////////////////////////////////////////
//
//  File Name : Program250.cpp
//  Description : Programs in C++ 
//  Name : Apurva Vilas Shinde
//  Date : 3/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    float Ret, Value1, Value2;

    cout<<"Enter first element : \n";
    cin>>Value1;

    cout<<"Enter second element : \n";
    cin>>Value2;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}