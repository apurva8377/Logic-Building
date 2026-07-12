/////////////////////////////////////////////////////////
//
//  Program Name  : Program0059.c
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
//  Input       :       Input : 6    iCnt = 2
//                      Input : 8    iCnt = 2
//                      Input : 12    iCnt = 2
//                      Input : 9    iCnt = 3
//                      Input : 27    iCnt = 3
//
//                      Input : 13    iCnt = 7
//                      Input : 17    iCnt = 9
//                      Input : 23    iCnt = 12
//                      Input : 29    iCnt = 15
//  Time complexity :   For prime - O(N/2)
//                      For Non prime - either 1 or 2
//  Author :            Apurva Vilas Shinde
//  Date :              10/07/2026
//
/////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2, bFlag = true; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;           // optimization
        }
    }

    return bFlag;
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