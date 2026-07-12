/////////////////////////////////////////////////////////
//
//  Program Name  : Program0084.java
//  Description   : Check perfect number
//  Input         : 28 / 32
//  Output        : perfect number / Not perfect number
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0, iSum = 0;

        if(iNo < 0)
        {
            iNo = - iNo;
        }

        for(iCnt = 1; (iCnt <= (iNo / 2) && (iSum < iNo)); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return (iSum == iNo);
    }
}  // End of Number 

class Program0084
{
    public static void main(String A[]) 
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+" is perfect number");
        }
        else
        {
            System.out.println(iValue+" is not a perfect number");
        }

        sobj = null;
        nobj = null;

        System.gc();
    }
}

