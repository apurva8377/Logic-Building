/////////////////////////////////////////////////////////
//
//  Program Name  : Program0074.java
//  Description   : Problems on digits
//  Input         : 12
//  Output        : 1   2   3   4   6
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

// Checked Exception 

import java.io.*;

class Program0074
{
    public static void main(String A[])
    {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

