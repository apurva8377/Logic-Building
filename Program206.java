/////////////////////////////////////////////////////////////
//
//  File Name : Program206.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.*;

class Program206

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter string : ");
        String name = sobj.nextLine();

        for(iCnt = 0; iCnt < name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        }
    }
}