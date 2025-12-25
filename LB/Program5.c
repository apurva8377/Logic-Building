///////////////////////////////////////////////////
//
//  File Name : Program5.c
//  Description : Used to calculate Percentage
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////


#include<stdio.h>

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPercentageValue;
}

int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter your Total Marks : \n");
    scanf("%d",&iTotal);

    printf("Enter your Obtained Marks : \n");
    scanf("%d",&iObtained);

    fPercentage = CalculatePercentage(iTotal, iObtained);

    printf("Percentage is : %.2f%%\n",fPercentage);

    return 0;
}
