//////////////////////////////////////////////////////////////////
//
//  File Name : Program307.cpp
//  Description : Programs in C++ (Array) (Segmentation fault occurs)
//  Name : Apurva Vilas Shinde
//  Date : 8/4/2026
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the arary are : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.iSize = 15;
    aobj.Arr = NULL;

    aobj.Accept();
    aobj.Display();

    return 0;
}