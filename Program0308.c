/////////////////////////////////////////////////////////
//
//  Program Name  : Program0308.c
//  Description   : Problems on Data Structures
//  Author        : Apurva Vilas Shinde
//  Date          : 20/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    NODE obj;
    PNODE ptr1 = NULL;
    PPNODE ptr2 = NULL;

    ptr1 = &obj;
    ptr2 = &ptr1;

    return 0;
}
