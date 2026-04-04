/////////////////////////////////////////////////////////////
//
//  File Name : Program269.cpp
//  Description : Programs in C
//  Name : Apurva Vilas Shinde
//  Date : 4/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Number in Decimal format : "<<std::dec<<iValue<<"\n";
    cout<<"Number in octal format : "<<std::oct<<iValue<<"\n";
    cout<<"Number in Hexadecimal format : "<<std::hex<<iValue<<"\n";

    return 0;
}