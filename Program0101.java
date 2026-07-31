/////////////////////////////////////////////////////////
//
//  Program Name  : Program00101.java
//  Description   : Problems on array
//  Function      : Displsy(), CountEven() 
//  Input         : 5
//  Output        : 10  20  30  40  50
//  Output        : Even number : 5
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

import java.util.*;

class ArrayX{
    public void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("Elements of the array are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }

    public int CountEven(int Brr[])
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Program0101
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("Enter the size of an array : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        aobj.Display(Arr);

        iRet = aobj.CountEven(Arr);
        System.out.println("Even elements are : "+iRet);

        sobj = null;
        aobj = null;

        System.gc();
    }
}