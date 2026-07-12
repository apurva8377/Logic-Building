/////////////////////////////////////////////////////////
//
//  Program Name  : Program0094.java
//  Description   : Problems on array
//  Input         : [10,20,30,40]
//  Output        : 10  20  30  40
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

class ArrayX
{
    public void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("The elements are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}

class Program0094
{
    public static void main(String A[])
    {
        int Arr[] = {10,20,30,40};

        ArrayX aobj = new ArrayX();

        aobj.Display(Arr);
    }
}