///////////////////////////////////////////////////////////////
//
//  File Name : Program88.c
//  Description : Pattern Printing
//  Name : Apurva Vilas Shinde
//  Date : 9/1/2026
//
///////////////////////////////////////////////////////////////

/*
    *	*	*	
    *	*	*	
    *	*	*	
*/

#include<stdio.h>

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}