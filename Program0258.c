/////////////////////////////////////////////////////////
//
//  Program Name  : Program0258.java
//  Description   : Problems on String
//  Author        : Apurva Vilas Shinde
//  Date          : 09/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';   // *sext = *src
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string : \n");
    scanf(" %[^'\n']s",Arr);

    printf("Enter destination string : \n");
    scanf(" %[^'\n']s",Brr);

    strcpyX(Arr,Brr);

    printf("Updated string is : %s\n",Brr);

    return 0;
}