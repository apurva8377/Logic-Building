///////////////////////////////////////////////////
//
//  File Name : Progra37.c
//  Description : Used to Display even Factors of a given number
//  Function  : DisplayFactorsNonFactors
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)   // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}