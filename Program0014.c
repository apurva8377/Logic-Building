/////////////////////////////////////////////////////////
//
//  Program Name :  Program14.c
//  Discription  :  Program to Check odd or even number
//  Function     :  CheckEvenOdd()
//  Input        :  10, 11
//  Output       :  Even, Odd
//  Author       :  Apurva Vilas Shinde
//  Date         :  09/07/2026
//
//////////////////////////////////////////////////////////

/*
    START
        Accept number and store as no
        Divide no by 2 
        If the remainder is 0
            then display as Even
        otherwise 
            display as Odd
    STOP

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}