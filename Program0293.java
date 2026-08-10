/////////////////////////////////////////////////////////
//
//  Program Name  : Program0293.java
//  Description   : Problems on Array
//  Author        : Apurva Vilas Shinde
//  Date          : 10/08/2026
//
//////////////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0293
{
    public static void main(String A[])
    {
        int Arr[] = {45,21,78,90,54};

        // this is foreach loop
        for(int no : Arr)
        {
            System.out.println(no);
        }

        Arrays.sort(Arr);

        System.out.println("Array after sorting : ");

        for(int no : Arr)
        {
            System.out.println(no);
        }
    }
}

