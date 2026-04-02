///////////////////////////////////////////////////
//
//  File Name : Progra45.c
//  Description : Problems on Digits
//  Function  : ---
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);   // 1
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);    // 75

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);   // 5
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);    // 7

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);   // 7
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);    // 0

    return 0;
}