/////////////////////////////////////////////////////////
//
//  Program Name  : Program0268.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iSum = 0;

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
    int Brr[] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Summation(Brr,5);

    cout<<"Summation is : "<<iRet<<"\n";
    
    return 0;
}
