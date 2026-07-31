/////////////////////////////////////////////////////////
//
//  Program Name  : Program00105.java
//  Description   : Problems on array (OOP Design)
//  Function      : ArrayX()
//  Input         : -----
//  Output        : 
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

// OOP Design

import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int No)
    {
        System.out.println("Inside constructor");

        iSize = No;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
        
        System.out.println("Enter the elements of an array : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are : ");

        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
} // End of ArrayX class

class Program0107
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();
    }
}