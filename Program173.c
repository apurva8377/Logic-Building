//////////////////////////////////////////////////////////////
//
//  File Name : Program173.c
//  Description : Problems on Character 
//  Name : Apurva Vilas Shinde
//  Date : 1/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountCapitalSmall( char *str)
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >=  'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        str++;
    }

    printf("Number of capital characters are : %d\n", iCountCapital);
    printf("Number of Small characters are : %d\n",iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmall(Arr);

    return 0;
}

