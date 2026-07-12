/////////////////////////////////////////////////////////
//
//  Program Name  : Program0097.java
//  Description   : Problems on array
//  Input         : 
//  Output        : 0   0   0   0
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

class ArrayX{
    public void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("Elements from the array are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}

class Program0097
{
    public static void main(String A[])
    {
        int Arr[] = new int[4];

        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 30;
        Arr[3] = 40;

        ArrayX aobj = new ArrayX();

        aobj.Display(Arr);
    }
}