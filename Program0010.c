/////////////////////////////////////////////////////////
//
//  Program Name :  Program10.c
//  Discription  :  Program to display Addition()
//  Function     :  AdditionTwoNumbers()
//  Input        :  10, 11
//  Output       :  21
//  Author       :  Apurva Vilas Shinde
//  Date         :  08/07/2026
//
//////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it into positive
        Perform Addition of no1 & no2
        Display the addition on screen
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition         
//  Input :         Float, Float 
//  Output :        Float
//  Author :        Apurva Vilas Shinde
//  Date :          09/07/2026
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;    // Business Logic
    
    return fSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 10.5
//
/////////////////////////////////////////////////////////////////
