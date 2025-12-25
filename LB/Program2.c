///////////////////////////////////////////////////
//
//  File Name : Program2.c
//  Description : Used to calculate Percentage
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
//////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 400;
    int Obtained = 320;
    float Percentage = 0.0f;

    Percentage = (Obtained / Total) * 100;

    printf("Percentage is : %f\n",Percentage);

    return 0;
}