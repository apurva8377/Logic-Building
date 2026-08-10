/////////////////////////////////////////////////////////
//
//  Program Name  : Program0279.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

// OOP Approch (Generic)

#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public:
        T No1;
        T No2;

    Arithmatic(T A, T B)
    {
        No1 = A;
        No2 = B;
    }

    T Addition()
    {
        T Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    T Substraction()
    {
        T Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
};

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
   Arithmatic aobj1(11,10);    // ERROR
   Arithmatic aobj2(101,50);   // ERROR

   cout<<aobj1.Addition()<<"\n";
   cout<<aobj1.Substraction()<<"\n";

   cout<<aobj2.Addition()<<"\n";
   cout<<aobj2.Substraction()<<"\n";

   return 0;
}
