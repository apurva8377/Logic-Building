/////////////////////////////////////////////////////////
//
//  Program Name  : Program0051.c
//  Description   : It is used to count factors.
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
//  Function Name :     CountFactors()
//  Description :       Used to Count Factors
//  Input       :       12
//  Output      :       5
//  Time complexity :   O(N/2)
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;
        }
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

    iRet = CountFactors(iValue);

    printf("Number of factors are : %d\n",iRet);

    return 0;
}