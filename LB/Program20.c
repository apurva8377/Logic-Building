///////////////////////////////////////////////////
//
//  File Name : Progra20.c
//  Description : Used to Display number is even or odd
//  Function  : CkeckEven
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even number \n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}