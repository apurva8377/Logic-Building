///////////////////////////////////////////////////
//
//  File Name : Program55.java
//  Description : Accept input and display Addition of two numbers
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

import java.util.*;

class Program55
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enetr first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enetr second number : ");
        iValue2 = sobj.nextInt();

        iRet = Addition(iValue1, iValue2);

        System.out.println("Addition is : "+iRet);
    }
}

