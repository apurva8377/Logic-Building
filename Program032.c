///////////////////////////////////////////////////
//
//  File Name : Progra32.c
//  Description : Used to Display Factorial of numbers 
//  Function  : Factorial
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid value\n");
    }
    else
    {
        printf("Factorial is : %lu\n",iRet);
    }

    return 0;
}


// wrong for negative input because unsigned integer dosen't hold negative sign i.e first if condition dosen't occours