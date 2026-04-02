//////////////////////////////////////////////////////////////
//
//  File Name : Program149.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 26/2/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("%c is small\n",cValue);
    }
    else
    {
        printf("%c is not small\n",cValue);
    }

    return 0;
}