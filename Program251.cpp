/////////////////////////////////////////////////////////////
//
//  File Name : Program251.cpp
//  Description : Programs in C++ (Generic programming)
//  Name : Apurva Vilas Shinde
//  Date : 3/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

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