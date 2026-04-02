/////////////////////////////////////////////////////////////
//
//  File Name : Program209.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.*;

class Program209

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
               iCount++ ;
            }  
        }

        System.out.println("Number of small characters are : "+iCount);
    }
}