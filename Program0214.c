/////////////////////////////////////////////////////////
//
//  Program Name  : Program0214.c
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}
