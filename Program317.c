//////////////////////////////////////////////////////////////////
//
//  File Name : Program317.c
//  Description : Data Structures (DSA)
//  Date : 8/4/2026
//
/////////////////////////////////////////////////////////////////

// Singly Linear Linked List

// | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL

#include<stdio.h>
#include<stdlib.h>

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
    PNODE head = NULL;

    PNODE newn1 = NULL;
    PNODE newn2 = NULL;
    PNODE newn3 = NULL;

    newn1 = (PNODE)malloc(sizeof(NODE));

    newn2 = (PNODE)malloc(sizeof(NODE));

    newn3 = (PNODE)malloc(sizeof(NODE));

    return 0;
}