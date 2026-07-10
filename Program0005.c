////////////////////////////////////////////
//
//  Program Name :  Program5.c
//  Discription  :  Program to write Addition()
//  Input        :  10, 11
//  Output       :  21
//  Author       :  Apurva Vilas Shinde
//  Date         :  08/07/2026
//
///////////////////////////////////////////

#include<stdio.h>

int main()
{
    int i = 0, j = 0, Ans = 0;

    printf("Enter the first number : \n");
    scanf("%d",&i);

    printf("Enter the first number : \n");
    scanf("%d",&j);

    Ans = i + j;

    printf("Addition is : %d\n",Ans);

    return 0;
}