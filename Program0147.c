/////////////////////////////////////////////////////////
//
//  Program Name  : Program0147.c
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
//  Function Name : Minimum()
//  Description   : To find minimum number from given array
//  Input         : int (Arr), int
//  Output        : int
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    
    for(iCnt = 0, iMin = Arr[0]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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
    
    iRet = Minimum(ptr, iLength);

    printf("The minimum number is : %d\n",iRet);

    // Step 3 : Freee the memory
    free(ptr);

    return 0;
}