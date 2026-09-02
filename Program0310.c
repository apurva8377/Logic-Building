/////////////////////////////////////////////////////////
//
//  Program Name  : Program0310.c
//  Description   : Problems on Data Structures
//  Author        : Apurva Vilas Shinde
//  Date          : 31/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

#pragma pack(1)
typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE , **PPNODE;

int main()
{
    PNODE ptr = NULL;

    ptr = (PNODE)malloc(sizeof(NODE));

    // Use the node

    free (ptr);

    return 0;
}
