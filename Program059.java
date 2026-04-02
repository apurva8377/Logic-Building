///////////////////////////////////////////////////
//
//  File Name : Program59.java
//  Description : Accept input and display Addition of two numbers
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

    public boolean CheckEven()
    {
        if((this.iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program59
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number(iValue);

        bRet = nobj.CheckEven();

        if(bRet == true)
        {
            System.out.println(iValue+" is even");
        }
        else
        {
            System.out.println(iValue+" is odd");
        }
    }
}