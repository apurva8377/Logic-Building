/////////////////////////////////////////////////////////
//
//  Program Name  : Program0252.java
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

// Input : Hello    Output : _ello

import java.util.*;

class StringX
{
    public String str;

    public StringX(String a)
    {
        this.str = a;
    }

    public String Update()
    {
        char Arr[] = str.toCharArray();
        
        Arr[0] = '_';

        String temp = new String(Arr);

        return temp;
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0252
{
    public static void main(String A[])
    {
        String sRet = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sValue = sobj.nextLine();

        StringX strobj = new StringX(sValue);

        sRet = strobj.Update();

        System.out.println("Updated string is : "+sRet);
    }
}