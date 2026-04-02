///////////////////////////////////////////////////
//
//  File Name : Progra23.c
//  Description : Used to Display
//  Function  : CheckDivisible
//  Input    : bool
//  Output   : String
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && (iNo % 5) == 0)
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
    int bRet = false;

    printf("Enter number to check whether it is divisible by 3 & 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if(bRet == true)
    {
        printf("%d is divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 & 5\n",iValue);
    }

    return 0;
}