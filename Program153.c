//////////////////////////////////////////////////////////////
//
//  File Name : Program153.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{
    printf("Your name is : %s\n",str);
}

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}