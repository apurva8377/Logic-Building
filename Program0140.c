/////////////////////////////////////////////////////////
//
//  Program Name  : Program0140.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 31/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(N)

/////////////////////////////////////////////////////////
//
//  Function Name : LinearSearch()
//  Description   : To calculate the the frequency of the given number
//  Input         : int (Arr), int, int
//  Output        : bool
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            return true;  // Not good programming practice
        }
    }

    return false;
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iCnt = 0, iValue = 0;
    IPTR ptr = NULL;
    bool bRet = false;

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

    printf("Enter the number to calculate frequency : \n");
    scanf("%d",&iValue);

    // Step 2 : Use the memory
    bRet = LinearSearch(ptr, iLength, iValue);
    
    if(bRet == true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is not present in the data\n",iValue);
    }

    // Step 3 : Freee the memory
    free(ptr);

    return 0;
}