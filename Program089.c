///////////////////////////////////////////////////////////////
//
//  File Name : Program89.c
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
    int i = 0,j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}

int main()
{
    Display();

    return 0;
}