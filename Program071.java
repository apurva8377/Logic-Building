///////////////////////////////////////////////////////////////
//
//  File Name : Program71.java
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

    public void DisplayEven()
    {
        int iCnt = 0, iDigit = 0;

        if(this.iNo < 0)
        {
            iNo = -iNo;
        }

        while(this.iNo > 0)
        {
            if(((iNo % 10) % 2) == 0)
            {
                System.out.println(iNo % 10);
            }

            iNo = iNo / 10;
        }
    }
}

class Program71
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        dobj.DisplayEven();
    }
}