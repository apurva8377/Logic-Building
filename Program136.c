//////////////////////////////////////////////////////////////
//
//  File Name : Program136.c
//  Description : Problems on array (Dynamic memory allocation)
//  Name : Apurva Vilas Shinde
//  Date : 11/2/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return (iCnt != iSize);
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *iPtr = NULL;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements.\n");
        return -1;
    }

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d: \n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the value that you want to search : \n");
    scanf("%d",&iValue);

    bRet = Search(iPtr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present int the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",iValue);
    }

    free(iPtr);

    return 0;
}