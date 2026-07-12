/////////////////////////////////////////////////////////
//
//  Program Name  : Program0069.c
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
//  Function Name :     CountDigits()
//  Description :       Used to count digits from number
//  Input       :       4235
//  Output      :       4
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)   //721
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
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

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}