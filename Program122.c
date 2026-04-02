//////////////////////////////////////////////////////////////
//
//  File Name : Program122.c
//  Description : Problems on array
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int ptr[], int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr, 5);

    return 0;
}