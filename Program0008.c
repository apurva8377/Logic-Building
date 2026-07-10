////////////////////////////////////////////
//
//  Program Name :  Program8.c
//  Discription  :  Program to display Addition()
//  Function     :  AdditionTwoNumbers()
//  Input        :  10, 11
//  Output       :  21
//  Author       :  Apurva Vilas Shinde
//  Date         :  08/07/2026
//
///////////////////////////////////////////

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        Perform Addition of no1 & no2
        Display the addition on screen
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;    // Business logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter the first number : \n");
    scanf("%f",&fValue1);

    printf("Enter the first number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}