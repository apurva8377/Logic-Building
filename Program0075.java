/////////////////////////////////////////////////////////
//
//  Program Name  : Program0075.java
//  Description   : Problems on digits
//  Input         : 12
//  Output        : 1   2   3   4   6
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

// Checked Exception 

import java.io.*;

class Program0075
{
    public static void main(String A[])
    {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");

        try
        {
            iNo = Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {}

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

