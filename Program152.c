//////////////////////////////////////////////////////////////
//
//  File Name : Program152.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}