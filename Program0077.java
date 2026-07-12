/////////////////////////////////////////////////////////
//
//  Program Name  : Program0077.java
//  Description   : Problems on digits
//  Input         : 12
//  Output        : 1   2   3   4   6
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        System.out.println("The factors of "+iNo+" are : ");

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
} // End of a Number class

class Program0077
{
    public static void main(String A[]) 
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactors(iValue);
    }
}

