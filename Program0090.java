/////////////////////////////////////////////////////////
//
//  Program Name  : Program0090.java
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
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}

class Program0090
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        
        dobj.DisplayDigits(iValue);
        
        sobj = null;
        dobj = null;

        System.gc();
    }
}