///////////////////////////////////////////////////
//
//  File Name : Progra15.c
//  Description : Used to Display
//  Function  : Display
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

// Iteration

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d : Hello\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}