//////////////////////////////////////////////////////////////
//
//  File Name : Program160.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n'");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}