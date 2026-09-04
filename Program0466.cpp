/////////////////////////////////////////////////////////
//
//  Program Name  : Program0465.cpp
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
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithmatic <int> aobj(11, 10);

    cout<<"Addition is : "<<aobj.Addition()<<"\n";
    cout<<"Substraction is : "<<aobj.Substraction()<<"\n";

    return 0;
}