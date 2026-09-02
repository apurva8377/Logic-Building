/////////////////////////////////////////////////////////
//
//  Program Name  : Program0311.c
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

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// call by value

void Display(PNODE first)
{}

int Count(PNODE first)
{
    return 0;
}

int main()
{
    PNODE head = NULL;

    Display(head);

    Count(head);

    return 0;
}
