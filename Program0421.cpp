/////////////////////////////////////////////////////////
//
//  Program Name  : Program0421.cpp
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

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLLL
{
    public:                  // Characteristic
    PNODE first;
    int iCount;

    SinglyLLL()             // Default constructor
    {
        cout<<"Object of SinglyLLL gets created.\n";
        first = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {}

    void InsertLast(int no)
    {}

    void InsertAtPos(int no, int pos)
    {}

    void DeleteFirst()
    {}

    void DeleteLast()
    {}

    void DeleteAtPos(int pos)
    {}

    void Display()
    {}

    int Count()
    {
        return iCount;
    }
};

int main()
{
    SinglyLLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(21);
    obj.InsertFirst(5);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}

