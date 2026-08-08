/////////////////////////////////////////////////////////
//
//  Program Name  : Program0223.c
//  Description   : Problems on String
//  Function      : strtoggleX()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'd')
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

    iRet = CountOccurance(Arr, 'd');

    printf("Number of occurance  of d is : %d\n",iRet);

    return 0;
}
