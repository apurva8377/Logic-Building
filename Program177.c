//////////////////////////////////////////////////////////////
//
//  File Name : Program177.c
//  Description : Problems on Character 
//  Input  : India
//  Output : IndiA
//  Name : Apurva Vilas Shinde
//  Date : 2/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int Change(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a') 
        {
            *str = 'A';
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("updated string is : %s\n",Arr);

    return 0;
}