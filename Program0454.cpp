/////////////////////////////////////////////////////////
//
//  Program Name  : Program0454.cpp
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
    struct node * next;
};

class SinglyCLL
{
    private:
        struct node * first;
        struct node * last;
        int iCount;

    public:
        SinglyCLL();
        void Display();
        int Count();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
};

SinglyCLL::SinglyCLL()
{
    cout<<"Inside constrctor of SinglyCLL\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCLL::InsertFirst(int no)
{
    struct node * newn = NULL;

    newn = new struct node;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;

        last->next = first;
    }

    iCount++;
}

void SinglyCLL::InsertLast(int no)
{
    struct node * newn = NULL;

    newn = new struct node;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;

        last->next = first;
    }

    iCount++;
}

void SinglyCLL::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if( first == last)
    {
        delete(first);

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete(last->next);

        last->next = first;
    }

    iCount--;
}

void SinglyCLL::DeleteLast()
{
    struct node * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete(last);

        last = temp;

        last->next = first;
    }

    iCount--;
}

void SinglyCLL::Display()
{
    if(first == NULL && labs == NULL)
    {
        return;
    }

    struct node * temp = NULL;

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    } while (temp != last->next);

    cout<<"\n";
}

int SinglyCLL::Count()
{
    return iCount;
}

void SinglyCLL::InsertAtPos(int no, int pos)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if( pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct node;
        
        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyCLL::DeleteAtPos(int pos)
{
    struct node * target = NULL;
    struct node * temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if( pos == iCount)
    {
        DeleteLast();
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

        iCount--;
    }
}

int main()
{
    SinglyCLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    sobj.InsertFirst(5);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :: "<<iRet<<"\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    sobj.InsertLast(151);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :: "<<iRet<<"\n";

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are :: "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.InsertAtPos(105, 5);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteAtPos(5);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}