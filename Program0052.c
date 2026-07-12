/////////////////////////////////////////////////////////
//
//  Program Name  : Program0052.c
//  Description   : It is used to count non factors.
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
//  Description :       Used to Count Non Factors
//  Input       :       12
//  Output      :       6
//  Time complexity :   O(N)
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

int CountNonFactors(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    iRet = CountNonFactors(iValue);

    printf("Number of non factors are : %d\n",iRet);

    return 0;
}