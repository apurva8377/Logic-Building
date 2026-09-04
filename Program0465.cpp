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

class Arithmatic
{
    public:
        int No1;
        int No2;

        Arithmatic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()
        {
            int Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithmatic *aobj = new Arithmatic(11, 10);

    cout<<"Addition is : "<<aobj->Addition()<<"\n";
    cout<<"Substraction is : "<<aobj->Substraction()<<"\n";

    return 0;
}