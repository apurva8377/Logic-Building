//////////////////////////////////////////////////////////////
//
//  File Name : Program148.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 26/2/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital\n",cValue);
    }
    else
    {
        printf("%c is not capital\n",cValue);
    }

    return 0;
}