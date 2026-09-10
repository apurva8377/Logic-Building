/////////////////////////////////////////////////////////
//
//  Program Name  : Program0491.cpp
//  Description   : Generalised Data Structure Library
//  Author        : Apurva Vilas Shinde
//  Date          : 08/09/2026
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class Stacknode
{
    public:
        T data;
        Stacknode *next;

        Stacknode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template <class T>
class Stack
{
    private:
        Stacknode<T> *first;
        int iCount;

    public:
        Stack();

        void push(T);  // InsertFirst
        T pop();       // DeleteFirst
        T peep();
        void Display();
        int Count();
};

template <class T>
Stack<T> :: Stack()
{
    cout<<"Stack gets created succsessfully...\n";

    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void Stack<T> :: push(T no)
{
    Stacknode<T> *newn = NULL;

    newn = new Stacknode<T>(no);

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

template <class T>
T Stack<T> :: pop()
{
    T Value = 0;

    Stacknode<T> *temp = NULL;

    temp = this->first;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    
    Value = this->first->data;

    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;
}

template<class T>
T Stack<T> :: peep()
{
    T Value = 0;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    Value = this->first->data;
    return Value;
}

template <class T>
void Stack<T> :: Display()
{
    Stacknode<T> *temp = NULL;

    temp = first;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return;
    }

    while(temp != NULL)
    {
        cout<<"|\t"<<temp->data<<"\t|\n";
        temp = temp->next;
    }
}

template <class T>
int Stack<T> :: Count()
{
    return this->iCount;
}

int main()
{
    Stack<char> *sobj = new Stack<char>();

    sobj->push('a');
    sobj->push('b');
    sobj->push('c');
    sobj->push('d');

    sobj->Display();

    cout<<"Number of elements in the stack is : "<<sobj->Count()<<"\n";

    cout<<"Return value of peep is : "<<sobj->peep()<<"\n";

    sobj->Display();

    cout<<"Popped element is : "<<sobj->pop()<<"\n";

    sobj->Display();

    cout<<"Number of elements in Stack are : "<<sobj->Count()<<"\n";

    cout<<"Poped element is : "<<sobj->pop()<<"\n";
    
    sobj->Display();

    cout<<"Number of elements in Stack are : "<<sobj->Count()<<"\n";

    sobj->push('e');

    sobj->Display();

    cout<<"Number of elements in Stack are : "<<sobj->Count()<<"\n";

    delete sobj;

    return 0;
}