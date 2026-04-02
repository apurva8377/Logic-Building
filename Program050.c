///////////////////////////////////////////////////
//
//  File Name : Program50.c
//  Description : Problems on Digits
//  Function  : DisplayDigits
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of digits are : %d\n",iRet);

    return 0;
}