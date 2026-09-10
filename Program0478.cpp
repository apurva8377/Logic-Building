/////////////////////////////////////////////////////////
//
//  Program Name  : Program0478.cpp
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
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        T Addition();
        T Maximum();
        int Frequency(T);
};

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    cout<<"Inside destructor\n";
    delete [] Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    int iCnt = 0;

    cout<< "Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt]<<"\t";
    }

    cout<<"\n";
}

template <class T>
T ArrayX<T> :: Addition()
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

template <class T>
T ArrayX<T> :: Maximum()
{
    int iMax = 0, iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

template <class T>
int ArrayX<T> :: Frequency(T iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>> iValue;

    // Step 1 : Allocate the memory
    ArrayX<int> *aobj = new ArrayX<int>(iValue);

    // Step2 : Use the memory
    aobj->Accept();
    aobj->Display();

    cout<<"Summation of all elements : "<<aobj->Addition()<<"\n";
    cout<<"The maximum number is : "<<aobj->Maximum()<<"\n";
    cout<<"Frequency is : "<<aobj->Frequency(11)<<"\n";

    // Step 3 : Deallocate the memory
    delete aobj;
    return 0;
}