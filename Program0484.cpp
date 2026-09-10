/////////////////////////////////////////////////////////
//
//  Program Name  : Program0484.cpp
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
template<class T>
class node
{
    public:
        T data;
        node *next;
        node *prev;

        node(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template<class T>
class DoublyLLL
{
    public:
        node<T> * first;
        int iCount;

        DoublyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

template<class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"Linked List gets created\n";

    this->first = NULL;
    this->iCount = 0;
}

template<class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    node<T> *newn = NULL;

    newn = new node<T>(no);

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

template<class T>
void DoublyLLL<T> :: InsertLast(T no)
{
   node<T> *newn = NULL;
   node<T> *temp = NULL;

    newn = new node<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++; 
}

template<class T>
void DoublyLLL<T> :: InsertAtPos(T no, int pos)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;

    int iCnt = 0;

    if((pos < 1) || (pos > this->iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new node<T>(no);

        temp = this->first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

template<class T>
void DoublyLLL<T> :: DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete(this->first);
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete(this->first->prev);
        this->first->prev = NULL;
    }

    this->iCount--;
}

template<class T>
void DoublyLLL<T> :: DeleteLast()
{
    node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete(this->first);
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete(temp->next);

        temp->next = NULL;
    }

    this->iCount--;
}

template<class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    node<T> *temp = NULL;

    int iCnt = 0;

    if((pos < 1) || (pos > this->iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        this->iCount--;
    }
}

template<class T>
void DoublyLLL<T> :: Display()
{
    node<T> *temp = NULL;

    temp = this->first;

    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

template<class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->InsertFirst('D');
    dobj->InsertFirst('C');
    dobj->InsertFirst('B');
    dobj->InsertFirst('A');
    
    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->InsertLast('E');
    dobj->InsertLast('F');
    dobj->InsertLast('G');
    dobj->InsertLast('H');

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->DeleteFirst();

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->DeleteLast();

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->InsertAtPos('$',5);

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    dobj->DeleteAtPos(5);

    dobj->Display();

    cout<<"number of elements are : "<<dobj->iCount<<"\n";

    return 0;
}