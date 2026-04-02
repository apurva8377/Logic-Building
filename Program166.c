//////////////////////////////////////////////////////////////
//
//  File Name : Program166.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of characters are : %d\n",iRet);
    
    return 0;
}