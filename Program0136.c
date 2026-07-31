/////////////////////////////////////////////////////////
//
//  Program Name  : Program0136.c
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
//  Function Name : FrequencyCalculate()
//  Description   : To calculate the the frequency of the given number
//  Input         : int (Arr), int
//  Output        : int
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}


//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iCnt = 0, iRet = 0, iValue = 0;
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

    printf("Enter the number to calculate frequency : \n");
    scanf("%d",&iValue);

    // Step 2 : Use the memory
    iRet = FrequencyCalculate(ptr, iLength, iValue);
    printf("Frequecy of 11 is : %d\n",iRet);

    // Step 3 : Freee the memory
    free(ptr);

    return 0;
}