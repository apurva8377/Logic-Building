/////////////////////////////////////////////////////////
//
//  Program Name  : Program0199.c
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
    char FileName[20];

    printf("Enter the name of file that you want create : \n");
    scanf("%s",FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succsesfully created with fd : %d\n",fd);
    }

    return 0;
}
