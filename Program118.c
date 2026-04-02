//////////////////////////////////////////////////////////////
//
//  File Name : Program118.c
//  Description : Problems on array
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from the array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}