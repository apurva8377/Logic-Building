/////////////////////////////////////////////////////////
//
//  Program Name  : Program0118.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description   : To display an array
//  Input         : int
//  Output        : void
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

void Display(int Arr[])  
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

    printf("\n");
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int Brr[] = {10,20,30,40};

    Display(Brr);

    return 0;
}