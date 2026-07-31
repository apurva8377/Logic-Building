/////////////////////////////////////////////////////////
//
//  Program Name  : Program00103.java
//  Description   : Problems on array (OOP Design)
//  Function      : ArrayX()
//  Input         : -----
//  Output        : 
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

// OOP Design

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int no)
    {
        iSize = no;
        Arr = new int[iSize];
    }
}

class Program0103
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        ArrayX aobj2 = new ArrayX(7);
        ArrayX aobj3 = new ArrayX(3);
    }
}