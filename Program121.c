//////////////////////////////////////////////////////////////
//
//  File Name : Program121.c
//  Description : Problems on array
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int ptr[], int iSize)
{
    printf("Elements of the array are : \n");

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]); 
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
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