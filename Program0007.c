////////////////////////////////////////////
//
//  Program Name :  Program7.c
//  Discription  :  Program to display Addition()
//  Function     :  AdditionTwoNumbers()
//  Input        :  10, 11
//  Output       :  21
//  Author       :  Apurva Vilas Shinde
//  Date         :  08/07/2026
//
///////////////////////////////////////////

#include<stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the first number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}