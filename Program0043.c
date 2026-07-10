/////////////////////////////////////////////////////////
//
//  Program Name  :  Program43.c
//  Description   : It is used to display 
//  Input         : 12   2       Ouput : true
//  Input         : 12   3       Ouput : true
//  Input         : 12   5       Ouput : false
//  Input         : 12   12      Ouput : true
//  Input         : 12   7       Ouput : flase
//  Author        :  Apurva Vilas Shinde
//  Date          :  10/07/2026
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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }

    return 0;
}