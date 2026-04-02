///////////////////////////////////////////////////
//
//  File Name : Progra36.c
//  Description : Used to Display Factors of a given number
//  Function  : DisplayFactorsNonFactors
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)            // Updator
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factors is %d\n",iCnt);
        }
        else
        {
            printf("Non factor is %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}