/////////////////////////////////////////////////////////
//
//  Program Name  : Program0304.c
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

int main()
{
    struct node obj;

    printf("%ld\n",sizeof(obj));

    return 0;
}
