//////////////////////////////////////////////////////////////
//
//  File Name : Program146.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 26/2/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch > 65 && ch < 97)
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
    
    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital\n",cValue);
    }
    else
    {
        printf("%c is not Capital\n",cValue);
    }

    return 0;
}