///////////////////////////////////////////////////////////////
//
//  File Name : Program62.java
//  Description : Accept input and display Non Factors
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
///////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int iNo;

    public Number(int A)
    {
        this.iNo = A;
    }

    public void DisplayNonFactors()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt ) != 0)
            {
                System.out.println("Non factors are : "+iCnt);
            }
        }
    }
}

class Program62
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        nobj.DisplayNonFactors();
    }
}