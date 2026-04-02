//////////////////////////////////////////////////////////////
//
//  File Name : Program192.c
//  Description : Problems on Character and String
//  Name : Apurva Vilas Shinde
//  Date : 4/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool checkCharacter(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}


int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = checkCharacter(Arr, cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue, Arr);
    }
    else
    {
        printf("%c is not present in %s\n",cValue,Arr);
    }

    return 0;
}