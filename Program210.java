/////////////////////////////////////////////////////////////
//
//  File Name : Program210.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.*;

class MarvellousString
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Program210
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        int iRet = 0;

        iRet = mobj.CountSmall(str);

        System.out.println("Number of small characters are : "+iRet);
    }
}