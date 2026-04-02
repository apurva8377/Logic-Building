/////////////////////////////////////////////////////////////
//
//  File Name : Program213.java
//  Description : Java Programs 
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

import java.util.Scanner;

import MarvellousLB.MarvellousString;

class Program212
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        int iRet = 0;

        iRet = mobj.CountSmall();

        System.out.println("Number of small characters are : "+iRet);
    }
}