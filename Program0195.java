/////////////////////////////////////////////////////////
//
//  Program Name  : Program0195.java
//  Description   : Problems on pattern printing
//  Author        : Apurva Vilas Shinde
//  Date          : 5/08/2026
//
//////////////////////////////////////////////////////////

/*
    iRow : 4
    iCol : 4

    *   
    *   *   
    *   *   *   
    *   *   *   *
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

        // Filter for square matrix
        if(this.iRow != this.iCol)
        {
            System.out.println("Invalid Input");
            System.out.println("Row number and coulumn number should be same");
            return;
        }

        for(i = 1; i <= this.iRow; i++)
        {
            for(j = 1; i >= j; j++)
            {
                System.out.printf("*\t");      
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

class Program0195
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