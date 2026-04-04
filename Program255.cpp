/////////////////////////////////////////////////////////////
//
//  File Name : Program255.cpp
//  Description : Programs in C++ (Generic programming)
//  Name : Apurva Vilas Shinde
//  Date : 3/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if ((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
}

int main()
{
    cout<<Maximum(14,18,11)<<"\n";
    cout<<Maximum(21,18,17)<<"\n";
    cout<<Maximum(21.84,47.54,12.65)<<"\n";
    
    return 0;
}