/////////////////////////////////////////////////////////
//
//  Program Name  : Program0163.java
//  Description   : Problems on pattern printing
//  Author        : Apurva Vilas Shinde
//  Date          : 31/07/2026
//  Input         : 6
//  Output        : 1   *   2   *   3   *  4   *  
//
////////////////////////////////////////////////////////// 

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

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
        }

        System.out.println();
    }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

class Program0163
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