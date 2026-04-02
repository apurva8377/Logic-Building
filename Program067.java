///////////////////////////////////////////////////////////////
//
//  File Name : Program67.java
//  Description : Problems on Digits
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
///////////////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int iNo;

    public Digits(int A)
    {
        this.iNo = A;
    }

    public int CountDigits()
    {
        int iCnt = 0;

        while(this.iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Program67
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        iRet = dobj.CountDigits();

        System.out.println("Number of digits are : "+iRet);
    }
}