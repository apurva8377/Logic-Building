/////////////////////////////////////////////////////////
//
//  Program Name  : Program0093.java
//  Description   : Problems on array
//  Input         : [10,20,30,40]
//  Output        : 10  20  30  40
//  Author        : Apurva Vilas Shinde
//  Date          : 13/07/2026
//
////////////////////////////////////////////////////////// 

class Program0093
{
    public static void main(String A[])
    {
        int Arr[] = {10,20,30,40};
        int iCnt = 0;

        System.out.println("Number of elements : "+Arr.length);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}