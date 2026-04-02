///////////////////////////////////////////////////
//
//  File Name : Program60.java
//  Description : Accept input and display Factors
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

import java.util.*;

class Number
{
    public int iNo;

    public Number(int A)
    {
        this.iNo = A;
    }

    public void DisplayFactors()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (this.iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program60
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        nobj.DisplayFactors();
    }
}