/////////////////////////////////////////////////////////
//
//  Program Name  : Program0150.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 31/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

/////////////////////////////////////////////////////////
//
//  Function Name : ReverseDisplay()
//  Description   : Swap the numbers
//  Input         : int , int
//  Output        : void
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
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
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    // Step 2 : Use the memory
    ReverseDisplay(iPtr, iLength);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}