/////////////////////////////////////////////////////////
//
//  Program Name  : Program00108.java
//  Description   : Problems on array (OOP Design)
//  class         : ArrayX()
//  Functions     : Accept(), Display(), Average()
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
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

    public float Average()
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return (iSum / iSize);
    }
} // End of ArrayX class

class Program0108
{
    public static void main(String A[])
    {
        float fRet = 0.0f;

        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        fRet = aobj1.Average();

        System.out.println("Average of numbers from array is : "+fRet);
    }
}