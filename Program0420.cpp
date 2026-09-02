/////////////////////////////////////////////////////////
//
//  Program Name  : Program0420.cpp
//  Description   : 
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
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
    private:
        int No1, No2;

    public:
        Arithmatic(int A, int B);
        int Addition();
        int Substraction();
};

Arithmatic :: Arithmatic(int A, int B)
{
    this->No1 = A;
    this->No2 = B;
}

int Arithmatic :: Addition()
{
    return No1+No2;
}

int Arithmatic :: Substraction()
{
    return No1-No2;
}

int main()
{
    Arithmatic aobj (11,10);

    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Substraction()<<"\n";

    return 0;
}

/*

ReturnValue ClassName :: FuntionName()
{

}

*/

