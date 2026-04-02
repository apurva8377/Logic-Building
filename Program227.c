/////////////////////////////////////////////////////////////
//
//  File Name : Program227.c
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

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File is succsesfully created with FD %d\n",fd);

    return 0;
}