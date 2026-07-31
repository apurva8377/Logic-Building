/////////////////////////////////////////////////////////
//
//  Program Name  : Program0115.c
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

void Display(int *Arr)  
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++, Arr++)
    {
        printf("%d\t",*Arr);
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
    int Arr[] = {10,20,30,40};

    Display(Arr);

    return 0;
}