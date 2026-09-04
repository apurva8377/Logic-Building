/////////////////////////////////////////////////////////
//
//  Program Name  : Program0441.java
//  Description   : Problems on data structures and algorithms
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
//
//////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;
}

class SinglyLLL
{
    public node first;
    public int iCount;

    SinglyLLL()
    {
        System.out.println("Object of SinglyLLL gets created");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void Insertfirst(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }

    public void InsertLast(int no)
    {}

    public void InsertAtPos(int no, int pos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int pos)
    {}
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0441
{
    public static void main(String A[])
    {
        SinglyLLL sobj = null;
        int iRet = 0;

        sobj = new SinglyLLL();

        sobj.Insertfirst(51);
        sobj.Insertfirst(21);
        sobj.Insertfirst(11);
        sobj.Insertfirst(5);

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        // important for memory deallocation
        sobj = null;
        System.gc();
    }
}