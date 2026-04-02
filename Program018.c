///////////////////////////////////////////////////
//
//  File Name : Progra18.c
//  Description : Used to Display Summation of numbers
//  Function  : Summation
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

// Iteration

int Summation(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter the value : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is %d\n",iRet);

    return 0;
}