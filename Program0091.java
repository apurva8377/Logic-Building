/////////////////////////////////////////////////////////
//
//  Program Name  : Program0091.java
//  Description   : Display the digits from the number
//  Input         : 23476
//  Output        : 6   7   4   3   2
//  Author        : Apurva Vilas Shinde
//  Date          : 12/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class Digit
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        return iSum;
    }
}

class Program0091
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        
        iRet = dobj.SumDigits(iValue);

        System.out.println("The summation of digits is : "+iRet);
        
        sobj = null;
        dobj = null;

        System.gc();
    }
}