/////////////////////////////////////////////////////////
//
//  Program Name  : Program0245.java
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

import java.util.*;



/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0244
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sobj = scanobj.nextLine();

        char Arr[] = sobj.toCharArray();

        System.out.println(sobj.length());

        System.out.println(Arr.length);
    }
}