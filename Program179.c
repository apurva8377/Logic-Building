//////////////////////////////////////////////////////////////
//
//  File Name : Program178.c
//  Description : Problems on Character 
//  Input  : InDia
//  Output : india
//  Name : Apurva Vilas Shinde
//  Date : 2/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("updated string is : %s\n",Arr);

    return 0;
}