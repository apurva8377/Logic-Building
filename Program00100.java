/////////////////////////////////////////////////////////
//
//  Program Name  : Program00100.java
//  Description   : Problems on array
//  Input         : 5
//  Output        : 10  20  30  40  50
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class ArrayX
{
    public void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("Elements from the array are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}

class Program00100
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        // importanat
        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();
    }
}