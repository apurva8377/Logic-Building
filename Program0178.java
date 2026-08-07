/////////////////////////////////////////////////////////
//
//  Program Name  : Program0178.java
//  Description   : Problems on pattern printing
//  Author        : Apurva Vilas Shinde
//  Date          : 5/08/2026
//
//////////////////////////////////////////////////////////

/*
    input :     8
    output :    z   y   x   w   v   u   t   s     
    Index :     1   2   3   4   5   6   7   8
*/

import java.util.*;

class Pattern 
{
    public int iNo;

    public Pattern(int a)
    {
        this.iNo = a;
    }

    public void Display()
    {
        int iCnt = 0;
        // int i = 65;

        char ch = 'z';

        for(iCnt = 0; iCnt <= this.iNo; iCnt++)
        {
            System.out.printf("%c\t",ch);
            ch--;
        }

        System.out.println();
    }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

class Program0178
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner((System.in));
        int iValue = 0;

        System.out.println("Enter the frequency : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern(iValue);

        pobj.Display();
    }
}