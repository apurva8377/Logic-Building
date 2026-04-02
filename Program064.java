///////////////////////////////////////////////////////////////
//
//  File Name : Program64.java
//  Description : Accept input and display Summation of Factor and Non Factors
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

    public void Sum()
    {
        int iCnt = 0, iSum1 = 0, iSum2 = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }

        System.out.println("Summation of factors : "+iSum1);
        System.out.println("Summation of non factors : "+iSum2);
    }
}

class Program64
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        nobj.Sum();
    }
}