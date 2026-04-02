//////////////////////////////////////////////////////////////
//
//  File Name : Program133.c
//  Description : Problems on array (Dynamic memory allocation)
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

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

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements.\n");
        return -1;
    }

    // Step1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to alloccate the memory\n");
        return -1;
    }
    
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the value that you want to search : \n");
    scanf("%d",&iValue);

    // step 3 : Use that memory
    bRet = Search(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    // Step3 : Free the memory
    free(ptr);

    return 0;
}