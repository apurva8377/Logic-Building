//////////////////////////////////////////////////////////////
//
//  File Name : Program174.c
//  Description : Problems on Character 
//  Name : Apurva Vilas Shinde
//  Date : 2/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
    int iCountCap = 0, iCountSamll = 0, iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSamll++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }

        str++;
    }

    printf("Numbre of capital characters are : %d\n",iCountCap);
    printf("Number of small characters are : %d\n",iCountSamll);
    printf("Number of digits are : %d\n",iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmallDigit(Arr);

    return 0;
}