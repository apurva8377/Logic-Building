//////////////////////////////////////////////////////////////
//
//  File Name : Program164.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char str[])
{
    int i = 0;

    for(i = 0; str[i] != 0; i++)
    {
        printf("%c\n",str[i]);
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}