/////////////////////////////////////////////////////////
//
//  Program Name  : Program0232.c
//  Description   : Problems on String
//  Function      : CountDigits()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int CountDigits(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
            iCount++;
        }
        
        str++;
    }

    printf("Number of digits are : %d\n",iCount);
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

    CountDigits(Arr);
    
    return 0;
}
  