//////////////////////////////////////////////////////////////
//
//  File Name : Program124.c
//  Description : Problems on array (Dynamic memory allocation)
//  Name : Apurva Vilas Shinde
//  Date : 16/1/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    // Step2 : Use thet memory

    // step 3 : Free the memory
    free(ptr);

    return 0;
}