/////////////////////////////////////////////////////////
//
//  Program Name  : Program0443.java
//  Description   : Problems on data structures and algorithms
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
//
//////////////////////////////////////////////////////////

class node
{
    public int data;
    public node next;

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
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

        newn = new node(no);

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node(no);

        if(first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        this.iCount++;
    }

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

class Program0443
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

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.InsertLast(151);
        
        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of nodes are : "+iRet);

        // important for memory deallocation
        sobj = null;
        System.gc();
    }
}