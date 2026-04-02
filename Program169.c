//////////////////////////////////////////////////////////////
//
//  File Name : Program169.c
//  Description : Problems on Character (ASCII value of character)
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}