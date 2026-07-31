/////////////////////////////////////////////////////////
//
//  Program Name  : Program0124.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

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

void Display(int Arr[], int iSize)  
{
    int iCnt = 0;

    printf("The elements of array are : \n");
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
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
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}