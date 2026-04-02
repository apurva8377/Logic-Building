//////////////////////////////////////////////////////////////
//
//  File Name : Program150.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 26/2/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c is digit\n",cValue);
    }
    else
    {
        printf("%c is not a digit\n",cValue);
    }

    return 0;
}