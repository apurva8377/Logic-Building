//////////////////////////////////////////////////////////////////
//
//  File Name : Program304.cpp
//  Description : Programs in C++ (generic programming)
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

    ArrayX(int iLength)
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
    ArrayX aobj(5);

    return 0;
}