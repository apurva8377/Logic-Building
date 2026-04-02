/////////////////////////////////////////////////////////////
//
//  File Name : Program225.c
//  Description : Programs on file handeling
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    return 0;
}