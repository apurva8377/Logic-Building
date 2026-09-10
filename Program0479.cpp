/////////////////////////////////////////////////////////
//
//  Program Name  : Program0479.cpp
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

class node
{
    public:
        int data;
        struct node *next;
        struct node *prev;

        node(int no)
        {
            data = no;
            next = NULL;
            prev = NULL;
        }
};

class DoublyLLL
{
    public:
        node * first;
        int iCount;

        DoublyLLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

DoublyLLL :: DoublyLLL()
{}

void DoublyLLL :: InsertFirst(int no)
{}

void DoublyLLL :: InsertLast(int no)
{}

void DoublyLLL :: InsertAtPos(int no, int pos)
{}

void DoublyLLL :: DeleteFirst()
{}

void DoublyLLL :: DeleteLast()
{}

void DoublyLLL :: DeleteAtPos(int pos)
{}

int main()
{
    DoublyLLL *dobj = new DoublyLLL();

    return 0;
}