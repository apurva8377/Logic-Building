/////////////////////////////////////////////////////////
//
//  Program Name  : Program0174.java
//  Description   : Problems on pattern printing
//  Author        : Apurva Vilas Shinde
//  Date          : 5/08/2026
//
//////////////////////////////////////////////////////////

/*
    input : 5
    output : a  b   c   d   e
    index :  1  2   3   4   5
    ASCII :  97 98  99  100 101 
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
        int iCnt = 0, i = 97;

        for(iCnt = 1; iCnt <= this.iNo; iCnt++,i++)
        {
            System.out.printf("%c\t",i);
        }

        System.out.println();
    }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

class Program0174
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