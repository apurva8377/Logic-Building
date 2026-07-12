/////////////////////////////////////////////////////////
//
//  Program Name  : Program0099.java
//  Description   : Problems on array
//  Input         : 5
//  Output        : 10   20   30   40   50
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

class Program0099
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");

        Arr[0] = sobj.nextInt();
        Arr[1] = sobj.nextInt();
        Arr[2] = sobj.nextInt();
        Arr[3] = sobj.nextInt();
        Arr[4] = sobj.nextInt();

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        // importanat
        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();
    }
}