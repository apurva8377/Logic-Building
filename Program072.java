///////////////////////////////////////////////////////////////
//
//  File Name : Program72.java
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

    public int CountEven()
    {
        int iCnt = 0, iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }

        return iCnt;
    }

}

class Program72
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        iRet = dobj.CountEven();

        System.out.println("Number of even digits are : "+iRet);
    }
}