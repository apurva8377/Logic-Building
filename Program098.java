///////////////////////////////////////////////////////////////
//
//  File Name : Program98.java
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 9/1/2026
//
///////////////////////////////////////////////////////////////

// Input 4  4   
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/

import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;
    }

    public void Display()
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
            {
                System.out.print(ch+"\t");
            }

            System.out.println();
        }
    }
}

class Program98
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1, iValue2);

        pobj.Display();
    }
}