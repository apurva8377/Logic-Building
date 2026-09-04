/////////////////////////////////////////////////////////
//
//  Program Name  : Program0439.java
//  Description   : Problems on data structures and algorithms
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
//
//////////////////////////////////////////////////////////

class node
{
    public int no;
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
    {}

    public int Count()
    {
        return this.iCount;
    }

    public void Insertfirst(int no)
    {}

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

class Program0439
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
    }
}