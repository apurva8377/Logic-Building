/////////////////////////////////////////////////////////
//
//  Program Name  : Program0073.java
//  Description   : Problems on digits
//  Input         : 12
//  Output        : 1   2   3   4   6
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

import java.util.*;

class Program0073
{
    public static void main(String A[])
    {
        int iNo = 0;
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

