/////////////////////////////////////////////////////////
//
//  Program Name  : Program0435.cpp
//  Description   : Problems on data structures and algorithms
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
        int No1, No2;              // Characteristics 

    public:
        Arithmatic(int A, int B);   // default constructor
        int Addition();
        int Substraction();
               
};

Arithmatic(int A, int B)
{
    this->No1 = A;
    this->No2 = B;
}

int Addition()
{
    return No1+No2;
}

int Substraction()
{
    return No1-No2;
}

int main()
{
    Arithmatic aobj(11,10);

    cout<<"Addition is : "<<aobj.Addition()<<"\n";
    cout<<"Substraction is : "<<aobj.Substraction()<<"\n";

    return 0;
}

/*

ReturnValue ClassName :: FuntionName()
{

}



*/