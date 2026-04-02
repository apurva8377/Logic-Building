//////////////////////////////////////////////////////////////
//
//  File Name : Program191.c
//  Description : Problems on Character and String
//  Name : Apurva Vilas Shinde
//  Date : 2/3/2026
//
/////////////////////////////////////////////////////////////////

// Input : deRm2dfr
// Char : R

// Output : 2 (Correct)

// Input Demo@23@re
// Char : @

// Output : 0 (Wrong)

#include<stdio.h>

int CharFrequency(char *str, char ch)
{
    int iCount = 0;
    int iDisplacement = 0;

        if((ch >= 'A') && (ch <= 'Z'))       // Capital
        {
            iDisplacement = 32;
        }
        else if((ch >= 'a') && (ch <= 'z'))   // Small
        {
            iDisplacement = -32;
        }
        else                                       // Other (Special chracter / digits)
        {
            iDisplacement = 0;
        }
        
        while(*str != '\0')
        {
            if((*str == ch) || (*str == ch+iDisplacement))
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
    char cValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CharFrequency(Arr, cValue);

    printf("%c occurs %d times.\n",cValue,iRet);

    return 0;
}