/////////////////////////////////////////////////////////
//
//  Program Name  : Program0148.c
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
//  Function Name : Update()
//  Description   : To update given array
//  Input         : int, int
//  Output        : void
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

void Update(int Arr[], int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iCnt = 0; 
    IPTR ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    ptr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements ao an array : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 2 : Use the memory
    
    Update(ptr, iLength);

    printf("Updated data from array is : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // Step 3 : Freee the memory
    free(ptr);

    return 0;
}