///////////////////////////////////////////////////////////////
//
//  File Name : Program63.java
//  Description : Accept input and display Summation of Non Factors
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

    public int SumNonFactors()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt ) != 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
    }
}

class Program63
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        iRet = nobj.SumNonFactors();

        System.out.println("Summation of Non factors is : "+ iRet);
    }
}