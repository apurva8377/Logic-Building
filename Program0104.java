/////////////////////////////////////////////////////////
//
//  Program Name  : Program00104.java
//  Description   : Problems on array (OOP Design)
//  Function      : ArrayX()
//  Input         : -----
//  Output        : 
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

// OOP Design

import java.util.Scanner;

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int no)
    {
        iSize = no;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the elements : ");

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
}

class Program0104
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);

        ArrayX aobj2 = new ArrayX(7);
    }
}