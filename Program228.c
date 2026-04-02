/////////////////////////////////////////////////////////////
//
//  File Name : Program228.c
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
    char Fname[20] = {'\0'};
    
    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    // O_RDONLY
    // O_WRONLY
    // O_RDWR

    fd = open(Fname, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is successfully opened with FD %d\n",fd);

    return 0;
}