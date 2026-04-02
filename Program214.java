/////////////////////////////////////////////////////////////
//
//  File Name : Program214.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.Scanner;

class MarvellousString
{
    public String str;

    public MarvellousString(String a)
    {
        this.str = a;
    }

    public String UpdateString()
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = '#';
            }
        }

        String ret = new String(Arr);

        return ret;
    }
}

class Program214
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        String sRet = null;

        sRet = mobj.UpdateString();

        System.out.println("Updated string is : "+sRet);
    }
}