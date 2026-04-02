//////////////////////////////////////////////////////////////
//
//  File Name : Program199.c
//  Description : Problems on Character and String
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("String after reversal is : %s\n",Arr);

    return 0;
}