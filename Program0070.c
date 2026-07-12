/////////////////////////////////////////////////////////
//
//  Program Name  : Program0070.c
//  Description   : Problems on digits
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name :     SumDigits()
//  Description :       Used for summation of digits from number
//  Input       :       4235
//  Output      :       14
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    while(iNo != 0)   //721
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digits are : %d\n",iRet);

    return 0;
}