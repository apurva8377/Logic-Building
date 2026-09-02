/////////////////////////////////////////////////////////
//
//  Program Name  : Program0413.c
//  Description   : Problems on Data Structures
//  Author        : Apurva Vilas Shinde
//  Date          : 2/09/2026
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
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first, PNODE last)
{}

int Count(PNODE first, PNODE last)
{}

void InsertFirst(PPNODE first,PPNODE last, int no)
{}

void InsertLast(PPNODE first,PPNODE last, int no)
{}

void InsertAtPos(PPNODE first,PPNODE last, int no, int pos)
{}

void DeleteFirst(PPNODE first, PPNODE last)
{}

void DeleteLast(PPNODE first, PPNODE last)
{}

void DeleteAtPos(PPNODE first,PPNODE last, int pos)
{}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    
    return 0;
}

