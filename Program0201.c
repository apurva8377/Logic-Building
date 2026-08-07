/////////////////////////////////////////////////////////
//
//  Program Name  : Program0201.c
//  Description   : File Handeling
//  Author        : Apurva Vilas Shinde
//  Date          : 07/08/2026
//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

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

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succsesfully opened with fd : %d\n",fd);
    }

    close(fd);
    
    return 0;
}
