///////////////////////////////////////////////////
//
//  File Name : Program4.c
//  Description : Used to calculate Percentage
//  Name : Apurva Vilas Shinde
//  Date : 25/12/2025
//
/////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your Total Marks : \n");
    scanf("%d",&Total);

    printf("Enter your obtained marks : \n");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);

    return 0;
}
