//////////////////////////////////////////////////////////////////
//
//  File Name : Program305.cpp
//  Description : Programs in C++ (Array)
//  Name : Apurva Vilas Shinde
//  Date : 8/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

    ArrayX(int iLength = 5)
    {
        cout<<"Inside constructor\n";
        iSize = iLength;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout<<"Inside destructor\n";
        delete []Arr;
    }
};

int main()
{
    ArrayX aobj1;
    ArrayX aobj2(10);

    return 0;
}