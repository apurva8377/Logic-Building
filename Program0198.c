/////////////////////////////////////////////////////////
//
//  Program Name  : Program0198.c
//  Description   : File Handeling
//  Author        : Apurva Vilas Shinde
//  Date          : 07/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

/////////////////////////////////////////////////////////
//
//  Entry point function of an application
//
////////////////////////////////////////////////////////

int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File succsesfully created with fd : %d\n",fd);
    }

    return 0;
}
