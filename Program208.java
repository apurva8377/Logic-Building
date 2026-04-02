/////////////////////////////////////////////////////////////
//
//  File Name : Program208.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.*;

class Program208

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter string : ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}