/////////////////////////////////////////////////////////
//
//  Program Name  : Program0087.java
//  Description   : Calculate the factorial aof given number
//  Input         : 5
//  Output        : 5   *   4   *   3   *   2   *   1 = 120
//  Author        : Apurva Vilas Shinde
//  Date          : 12/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class Number
{
    public int CalculateFactorial(int iNo)
    {
        int iCnt = 0, iFact = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
    }
}

class Program0087
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is : "+iRet);

        sobj = null;
        nobj = null;

        System.gc();
    }
}