/////////////////////////////////////////////////////////////
//
//  File Name : Program258.cpp
//  Description : Programs in C++ (Generic programming)
//  Name : Apurva Vilas Shinde
//  Date : 3/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int Size;

    cout<<"Enter number of elements : \n";
    cin>>Size;

    int * ptr = new int[Size];

    //Use

    delete []ptr;

    return 0;
}