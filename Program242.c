/////////////////////////////////////////////////////////////
//
//  File Name : Program242.c
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
    char Fname[20] = {"\0"};
    int fd = 0, iRet = 0;
    char Buffer[10] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is succsesfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer));
        }

        close(fd);
    }

    return 0;
}