/////////////////////////////////////////////////////////
//
//  Program Name  : Program0306.c
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

int main()
{
    // struct node nobj;
    NODE obj;

    obj.data = 11;
    obj.next = NULL;

    return 0;
}
