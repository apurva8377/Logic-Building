/////////////////////////////////////////////////////////
//
//  Program Name  : Program0475.cpp
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

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<< "Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt]<<"\t";
    }

    cout<<"\n";
}

int ArrayX :: Addition()
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>> iValue;

    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);

    // Step2 : Use the memory
    aobj->Accept();
    aobj->Display();

    cout<<"Summation of all elements : "<<aobj->Addition()<<"\n";

    // Step 3 : Deallocate the memory
    delete aobj;
    return 0;
}