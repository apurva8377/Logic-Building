//////////////////////////////////////////////////////////////
//
//  File Name : Program128.c
//  Description : Problems on array (Dynamic memory allocation)
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step1 = Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step2 : Use thet memory
    iRet = CountEven(ptr, iLength);

    printf("Number of even elements are : %d\n",iRet);

    // step 3 : Free the memory
    free(ptr);

    return 0;
}