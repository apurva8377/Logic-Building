///////////////////////////////////////////////////
//
//  File Name : Progra35.c
//  Description : Used to Display Factors of a given number
//  Function  : DisplayFactors
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)            // Updator
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt < (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}