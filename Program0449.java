/////////////////////////////////////////////////////////
//
//  Program Name  : Program0449.java
//  Description   : Problems on data structures and algorithms
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
//
//////////////////////////////////////////////////////////

class node
{
   public int data;
   public node next;
   public node prev;

   public node(int no)
   {
    this.data = no;
    this.next = null;
    this.prev = null;
   }
}

class DoubluCLL
{
    private node first;
    private node last;

    private int iCount;

    public DoubluCLL()
    {
        System.out.println("Object of DoublyCLL gets created.");

        this.first = null;
        this.last = null;

        this.iCount = 0;
    }

    public void Display()
    {}

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
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

class Program0449
{
    public static void main(String A[])
    {
        DoubluCLL obj = null;
        int iRet = 0;

        obj = new DoubluCLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteFirst();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteLast();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.InsertAtPos(105,4);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.DeleteAtPos(4);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
    
        // Important for memory deallocation 
        obj = null;
        System.gc();
        
    }
}

