///////////////////////////////////////////////////////////////
//
//  File Name : Program96.java
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 9/1/2026
//
///////////////////////////////////////////////////////////////

// Input 4  4   
/*
    A   B   C   D
    E   F   G   H
    I   J   K   L
    M   N   O   P
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
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }

            System.out.println();
        }
    }
}

class Program96
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