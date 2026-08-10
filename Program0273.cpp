/////////////////////////////////////////////////////////
//
//  Program Name  : Program0273.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max;

    Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }

    return Max;
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

    fRet = Maximum(Brr,5);

    cout<<"Maximum is : "<<fRet<<"\n";
    
    return 0;
}
