/////////////////////////////////////////////////////////
//
//  Program Name  : Program0109.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40,50};

    printf("%p\n",Arr);
    printf("%p\n",&Arr);
    printf("%p\n",&(Arr[0]));

    printf("%lu\n",sizeof(Arr));

    return 0;
}