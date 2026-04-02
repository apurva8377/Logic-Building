//////////////////////////////////////////////////////////////
//
//  File Name : Program132.c
//  Description : Problems on array (Dynamic memory allocation)
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iLength = 0, iCnt = 0;
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

    // step 3 : Use that memory
    bRet = Search(ptr,iLength);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    // Step3 : Free the memory
    free(ptr);

    return 0;
}