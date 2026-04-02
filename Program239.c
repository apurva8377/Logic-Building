/////////////////////////////////////////////////////////////
//
//  File Name : Program239.c
//  Description : Programs on file handeling
//  Name : Apurva Vilas Shinde
//  Date : 2/4/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[50] = {'\0'};

    printf("Enter the file name that yu want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succsesfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
        }

        printf("\n");

        close(fd);
    }

    return 0;
}