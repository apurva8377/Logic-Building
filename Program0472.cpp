/////////////////////////////////////////////////////////
//
//  Program Name  : Program0472.cpp
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

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize = no;
            Arr = new int [iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete [] Arr;
        }
};

int main()
{
    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);

    // Step2 : Use the memory
    // LB

    // Step 3 : Deallocate the memory
    delete aobj;
    return 0;
}