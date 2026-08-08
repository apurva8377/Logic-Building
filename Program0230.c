/////////////////////////////////////////////////////////
//
//  Program Name  : Program0230.c
//  Description   : Problems on String
//  Function      : CountCapital()
//  Author        : Apurva Vilas Shinde
//  Date          : 08/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of capital character are : %d\n",iCountCapital);

    printf("Number of small characters are : %d\n",iCountSmall);
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

    CountAll(Arr);
    
    return 0;
}
  