/////////////////////////////////////////////////////////
//
//  Program Name  : Program0467.cpp
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

// Arithmatic <int> obj(11,10)

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

    Arithmatic <double> dobj(11.8967,10.4567);

    cout<<"Addition is : "<<dobj.Addition()<<"\n";
    cout<<"Substraction is : "<<dobj.Substraction()<<"\n";

    return 0;
}