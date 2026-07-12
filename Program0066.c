/////////////////////////////////////////////////////////
//
//  Program Name  : Program0066.c
//  Description   : Problems on digits
//  Author        : Apurva Vilas Shinde
//  Date          : 10/07/2026
//
//////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("---------------------------------------\n");
    printf("Original value of iNo is : %d\n",iNo);

    while(iNo != 0)
    {
        printf("---------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }

    printf("---------------------------------------\n");
    
    return 0;
}