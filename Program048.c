///////////////////////////////////////////////////
//
//  File Name : Progra48.c
//  Description : Problems on Digits
//  Function  : DisplayDigits
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while (iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}