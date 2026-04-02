/////////////////////////////////////////////////////////////
//
//  File Name : Program245.c
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

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {"\0"};
    int fd = 0, iRet = 0, iSum = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

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

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            //printf("%s",Buffer);
            //write(1,Buffer,iRet);
            //memset(Buffer,'\0',BUFFER_SIZE);

            iSum = iSum + iRet;
        }

        printf("File size is : %dbytes\n",iSum);

        close(fd);
    }

    return 0;
}