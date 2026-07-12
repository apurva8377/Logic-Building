/////////////////////////////////////////////////////////
//
//  Program Name  : Program0054.c
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
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function Name :     CheckPrime()
//  Description :       Used to Check the number is prime no. or not
//  Input       :       7,  12
//  Output      :       Prime number, Non prime number
//  Time complexity :   O(N/2)
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if(iFrequency == 0)   // No factors
    {
        return true;
    }
    else                 // Atleast one factor
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}