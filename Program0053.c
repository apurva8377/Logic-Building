/////////////////////////////////////////////////////////
//
//  Program Name  : Program0053.c
//  Description   : It is used to count factors and non-factors.
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
//  Function Name :     CountNonFactors()
//  Description :       Used to Count Factors and Non-Factors
//  Input       :       12
//  Output      :       Factors - 5, Non Factors - 6
//  Time complexity :   O(N)
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iCountFactors = 0, iCountNonFactors = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCountFactors++;
        }
        else
        {
            iCountNonFactors++;
        }
    }

    printf("Number of factors are : %d\n",iCountFactors);
    printf("Numbr of non factors are : %d\n",iCountNonFactors);
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}