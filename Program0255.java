/////////////////////////////////////////////////////////
//
//  Program Name  : Program0255.java
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

    public String ToLowercase()
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        return new String(Arr);
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

class Program0255
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sValue = sobj.nextLine();

        StringX strobj = new StringX(sValue);

        sValue = strobj.ToLowercase();

        System.out.println("Updated string is : "+sValue);
    }
}