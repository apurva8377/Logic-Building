/////////////////////////////////////////////////////////
//
//  Program Name  : Program0256.java
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

// Input : Hello    Output : hELLO

import java.util.*;

class StringX
{
    public String str;

    public StringX(String a)
    {
        this.str = a;
    }

    public String strToggleX()
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
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

class Program0256
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sValue = sobj.nextLine();

        StringX strobj = new StringX(sValue);

        sValue = strobj.strToggleX();

        System.out.println("Updated string is : "+sValue);
    }
}