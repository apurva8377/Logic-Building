/////////////////////////////////////////////////////////
//
//  Program Name  : Program0274.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int CountFrequency(T Arr[], int Size, T No)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }

    return iCount;
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f,20.2f};
    int iRet = 0;

    iRet = CountFrequency(Brr, 6, 20.2f);

    cout<<"Frequency is : "<<iRet<<"\n";
    
    return 0;
}
