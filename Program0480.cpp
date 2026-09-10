/////////////////////////////////////////////////////////
//
//  Program Name  : Program0480.cpp
//  Description   : Problems on numbers
//  Author        : Apurva Vilas Shinde
//  Date          : 07/09/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

#pragma pack(1)
class node
{
    public:
        int data;
        node *next;
        node *prev;

        node(int no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
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
{
    cout<<"Linked List gets created\n";

    this->first = NULL;
    this->iCount = 0;
}

void DoublyLLL :: InsertFirst(int no)
{
    node *newn = NULL;

    newn = new node(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
}

void DoublyLLL :: InsertLast(int no)
{
   node *newn = NULL;
   node *temp = NULL;

    newn = new node(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++; 
}

void DoublyLLL :: InsertAtPos(int no, int pos)
{}

void DoublyLLL :: DeleteFirst()
{
    
}

void DoublyLLL :: DeleteLast()
{}

void DoublyLLL :: DeleteAtPos(int pos)
{}

void DoublyLLL :: Display()
{
    node *temp = NULL;

    temp = this->first;

    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

int DoublyLLL :: Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL *dobj = new DoublyLLL();

    dobj->InsertFirst(51);
    dobj->InsertFirst(21);
    dobj->InsertFirst(11);
    dobj->InsertFirst(5);

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->InsertLast(101);
    dobj->InsertLast(111);
    dobj->InsertLast(121);
    dobj->InsertLast(151);

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    return 0;
}