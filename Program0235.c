/////////////////////////////////////////////////////////
//
//  Program Name  : Program0235.c
//  Description   : Problems on String
//  Function      : Change()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

void Change(char str[])
{
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = '_';
        }
        str++;
    }
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

    Change(Arr);

    printf("Updated string is : %s\n",Arr);
    
    return 0;
}
  