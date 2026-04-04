/////////////////////////////////////////////////////////////
//
//  File Name : Program296.cpp
//  Description : Programs in C++ (Generic programming)
//  Name : Apurva Vilas Shinde
//  Date : 4/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

// call by address
void Swap(int *No1, int *No2)
{
    int temp = 0;

    temp = *No1;
    *No1 = *No2; 
    *No2 = temp;
}

int main()
{
    int a = 10, b = 20;

    Swap(&a,&b);

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    return 0;
}