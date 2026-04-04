/////////////////////////////////////////////////////////////
//
//  File Name : Program300.cpp
//  Description : Programs in C++ (Call by reference)
//  Name : Apurva Vilas Shinde
//  Date : 4/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the aaray are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    return 0;
}