/////////////////////////////////////////////////////////
//
//  Program Name  : Program0495.cpp
//  Description   : Generalised Data Structure Library
//  Author        : Apurva Vilas Shinde
//  Date          : 08/09/2026
//
//////////////////////////////////////////////////////////

/*
---------------------------------------------------------------------------------------
Type                    Name of class for node      Name of class for Functionality
---------------------------------------------------------------------------------------
Singly Linear            SinglyLLLnode               SinglyLLL
Singly Cirular           SinglyCLLnode               SinglyCLL
Doubly Linear            DoublyLLLnode               DoublyLLL
Doubly Circular          DoublyCLLnode               DoublyCLL
---------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//          Singly Linear LinlkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class SinglyLLLnode
{
    public:
        T data;
        SinglyLLLnode<T> *next;

        SinglyLLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template <class T>
class SinglyLLL
{
    private:
        SinglyLLLnode<T> * first;
        int iCount;

    public:
        SinglyLLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     SinglyLLL Constructor
//  Input :             None
//  Output :            Nothing
//  Description :       Initializes the Singly Linear Linked List
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"Object of SinglyLLL gets created\n";
    this->first = NULL;
    this->iCount = 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    SinglyLLLnode<T> *newn = NULL;

    newn = new SinglyLLLnode<T>(no);

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    SinglyLLLnode<T> * newn = NULL;
    SinglyLLLnode<T> * temp = NULL;

    newn = new SinglyLLLnode<T>(no);

    if(this->iCount == 0)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node, Position 
//  Output :            Nothing
//  Description :       Used to insert node at given position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: InsertAtPos(T no, int pos)
{
    SinglyLLLnode<T> *newn = NULL;
    SinglyLLLnode<T> *temp = NULL;

    int iCnt = 0;

    if((pos < 1) || (pos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new SinglyLLLnode<T>(no);

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             None
//  Output :            Nothing
//  Description :       Used to delete node from first position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: DeleteFirst()
{
    SinglyLLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete (this->first);
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        this->first = this->first->next;

        delete(temp);
    }

    this->iCount--;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             None
//  Output :            Nothing
//  Description :       Used to delete node from last position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: DeleteLast()
{
    SinglyLLLnode<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete (this->first);
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node at given position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    SinglyLLLnode<T> *target = NULL;
    SinglyLLLnode<T> *temp = NULL;

    int iCnt = 0;

    if((pos < 1) || (pos > iCount))
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
        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        delete(target);

        this->iCount--;
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             None
//  Output :            Nothing
//  Description :       Used to display the elements of Linked List
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: Display()
{
    SinglyLLLnode<T> *temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             None
//  Output :            Integer
//  Description :       Used to return the total number of nodes
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}

///////////////////////////////////////////////////////////////////////
//          Doubly Linear LinlkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class DoublyLLLnode
{
    public:
        T data;
        DoublyLLLnode *next;
        DoublyLLLnode *prev;

        DoublyLLLnode(T no)
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
        DoublyLLLnode<T> * first;
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DoublyLLL Constructor
//  Input :             None
//  Output :            Nothing
//  Description :       Initializes the Doubly Linear Linked List
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"Linked List gets created\n";

    this->first = NULL;
    this->iCount = 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertFirst
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at first position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    DoublyLLLnode<T> *newn = NULL;

    newn = new DoublyLLLnode<T>(no);

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertLast
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to insert node at last position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: InsertLast(T no)
{
   DoublyLLLnode<T> *newn = NULL;
   DoublyLLLnode<T> *temp = NULL;

    newn = new DoublyLLLnode<T>(no);

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     InsertAtPos
//  Input :             Data of node, Position
//  Output :            Nothing
//  Description :       Used to insert node at given position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: InsertAtPos(T no, int pos)
{
    DoublyLLLnode<T> *newn = NULL;
    DoublyLLLnode<T> *temp = NULL;

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
        newn = new DoublyLLLnode<T>(no);

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteFirst
//  Input :             None
//  Output :            Nothing
//  Description :       Used to delete node from first position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteLast
//  Input :             None
//  Output :            Nothing
//  Description :       Used to delete node from last position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: DeleteLast()
{
    DoublyLLLnode<T> *temp = NULL;

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DeleteAtPos
//  Input :             Position
//  Output :            Nothing
//  Description :       Used to delete node at given position
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    DoublyLLLnode<T> *temp = NULL;

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             None
//  Output :            Nothing
//  Description :       Used to display the elements of Linked List
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
void DoublyLLL<T> :: Display()
{
    DoublyLLLnode<T> *temp = NULL;

    temp = this->first;

    cout<<"NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             None
//  Output :            Integer
//  Description :       Used to return the total number of nodes
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}

///////////////////////////////////////////////////////////////////////
//                  Stack using Generic Approach
///////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Stack Constructor
//  Input :             None
//  Output :            Nothing
//  Description :       Initializes the Stack
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
Stack<T> :: Stack()
{
    cout<<"Stack gets created succsessfully...\n";

    this->first = NULL;
    this->iCount = 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     push
//  Input :             Data of node
//  Output :            Nothing
//  Description :       Used to push an element onto the stack
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
void Stack<T> :: push(T no)
{
    Stacknode<T> *newn = NULL;

    newn = new Stacknode<T>(no);

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     pop
//  Input :             None
//  Output :            Data of the popped node
//  Description :       Used to remove and return the top element of the stack
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     peep
//  Input :             None
//  Output :            Data of the top node
//  Description :       Used to fetch the top element without removing it
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             None
//  Output :            Nothing
//  Description :       Used to display the elements of Stack
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Count
//  Input :             None
//  Output :            Integer
//  Description :       Used to return the total number of elements in Stack
//  Author :            Apurva Vilas Shinde
//  Date :              08/09/2026
//
/////////////////////////////////////////////////////////////////////////////
template <class T>
int Stack<T> :: Count()
{
    return this->iCount;
}


//////////////////////////////// End of Library //////////////////////////////////

int main()
{
SinglyLLL<int> *obj = new SinglyLLL<int>();

    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);
    
    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj->DeleteFirst();
    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj->DeleteLast();

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj->InsertAtPos(105,4);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj->DeleteAtPos(4);

    obj->Display();

    iRet = obj->Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    delete obj;

    ///////////////////////////////////////////////////////////////////////
    
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->InsertFirst('A');
    dobj->InsertFirst('B');
    dobj->InsertFirst('C');
    
    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";

    dobj->InsertLast('X');
    dobj->InsertLast('Y');
    dobj->InsertLast('Z');
    
    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteFirst();

    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteLast();

    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";

    dobj->InsertAtPos('$',4);

    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteAtPos(4);

    dobj->Display();

    cout<<"Number of elements are : "<<dobj->Count()<<"\n";
    
    delete dobj;

/////////////////////////////////////////////////////////////////////////

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