////////////////////////////////////////////
//
//  Program Name :  Program6.c
//  Discription  :  Program to write Addition()
//  Function     :  Add()
//  Input        :  10, 11
//  Output       :  21
//  Author       :  Apurva Vilas Shinde
//  Date         :  08/07/2026
//
///////////////////////////////////////////

#include<stdio.h>

int Add(int a, int b)
{
    int Sum = 0;
    Sum = a + b;
    return Sum;
}

int main()
{
    int i = 0, j = 0, Ans = 0;

    printf("Enter the first number : \n");
    scanf("%d",&i);

    printf("Enter the first number : \n");
    scanf("%d",&j);

    Ans = Add(i,j);

    printf("Addition is : %d\n",Ans);

    return 0;
}