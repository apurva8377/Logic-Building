/////////////////////////////////////////////////////////
//
//  Program Name  : Program0165.java
//  Description   : Problems on pattern printing
//  Author        : Apurva Vilas Shinde
//  Date          : 5/08/2026
//
//////////////////////////////////////////////////////////

/*
    iRow :   4 
    iCol :   4

    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4
*/

import java.util.*;

class Pattern 
{
    public int iRow;
    public int iCol;

    public Pattern(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;
    }

    public void Display()
    {
        int i = 0, j = 0; 

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(j+"\t");
            }

            System.out.println();
        }
    }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

class Program0166
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner((System.in));
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1, iValue2);

        pobj.Display();
    }
}