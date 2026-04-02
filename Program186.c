//////////////////////////////////////////////////////////////
//
//  File Name : Program185.c
//  Description : Problems on Character and String
//  Name : Apurva Vilas Shinde
//  Date : 2/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

// Case insensitive
int CharFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch) || (*str == ch + 32))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CharFrequency(Arr, cValue);

    printf("%c occurs %d times\n",cValue,iRet);

    return 0;
}