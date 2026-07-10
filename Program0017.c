/////////////////////////////////////////////////////////
//
//  Program Name :  Program17.c
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

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       It is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Apurva Vilas Shinde
//  Date :              9/07/2026
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    return((iNo % 2) == 0);
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