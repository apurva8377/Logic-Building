/////////////////////////////////////////////////////////
//
//  Program Name  : Program0219.c
//  Description   : Problems on String
//  Function      : strlenX()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Count of 'A' is  : %d\n",iRet);

    return 0;
}
