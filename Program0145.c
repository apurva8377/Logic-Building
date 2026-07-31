/////////////////////////////////////////////////////////
//
//  Program Name  : Program0145.c
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
//  Function Name : Maximum()
//  Description   : To find maximum number from given array
//  Input         : int (Arr), int
//  Output        : int
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    iMax = Arr[0];     // important
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iCnt = 0, iRet = 0; 
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
    
    iRet = Maximum(ptr, iLength);

    printf("The maximum number is : %d\n",iRet);

    // Step 3 : Freee the memory
    free(ptr);

    return 0;
}