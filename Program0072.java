/////////////////////////////////////////////////////////
//
//  Program Name  : Program0072.java
//  Description   : Problems on digits
//  Input         : ---
//  Output        : 1   2   3   4   6
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

class Program0072
{
    public static void main(String A[])
    {
        int iNo = 12;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }


    }
}

