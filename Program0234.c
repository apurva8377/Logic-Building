/////////////////////////////////////////////////////////
//
//  Program Name  : Program0234.c
//  Description   : Problems on String
//  Function      : CountSpace()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int CountSpace(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        
        str++;
    }

    printf("Number of spaces : %d\n",iCount);
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

    CountSpace(Arr);
    
    return 0;
}
  