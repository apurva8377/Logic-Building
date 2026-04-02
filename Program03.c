///////////////////////////////////////////////////
//
//  File Name : Program3.c
//  Description : Used to calculate Percentage
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
//////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 400;
    int Obtained = 323;
    float Percentage = 0.0f;

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);

    return 0;
}