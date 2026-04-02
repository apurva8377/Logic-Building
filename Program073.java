///////////////////////////////////////////////////////////////
//
//  File Name : Program73.java
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

    public int Reverse()
    {
        int iDigit = 0, iRev = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }

        return iRev;
    }

}

class Program73
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        iRet = dobj.Reverse();

        System.out.println("Reverse number is : "+iRet);
    }
}