/////////////////////////////////////////////////////////////
//
//  File Name : Program215.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Program215
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        Arr = null;
        sobj = null;
    }
}