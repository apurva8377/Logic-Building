/////////////////////////////////////////////////////////
//
//  Program Name  : Program0294.java
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

class Program0294
{
    public static void main(String A[])
    {
        int Arr[] = {45,21,78,90,54};

        // this is foreach loop
        for(int no : Arr)
        {
            System.out.println(no);
        }

        int index = Arrays.binarySearch(Arr,90);

        System.out.println("Element has fount at : "+index);
    }
}

