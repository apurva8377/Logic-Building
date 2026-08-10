/////////////////////////////////////////////////////////
//
//  Program Name  : Program0270.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int iSize)
{
    int iCnt = 0; 
    T iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};
    float fRet = 0;

    fRet = Summation(Brr,5);

    cout<<"Summation is : "<<fRet<<"\n";
    
    return 0;
}
