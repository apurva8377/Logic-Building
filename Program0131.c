/////////////////////////////////////////////////////////
//
//  Program Name  : Program0131.c
//  Description   : Problems on array 
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name : Average()
//  Description   : To get the average of elements of an     array
//  Input         : int(array), int
//  Output        : float
//  Author        : Apurva Vilas Shinde
//  Date          : 30/07/2026
//
////////////////////////////////////////////////////////// 

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return (iSum / iSize);    // Issue
}

//////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
//////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iCnt = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
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

    fRet = Average(ptr, iLength);

    printf("The average of elements in array is : %.2f\n",fRet);

    free(ptr);

    return 0;
}