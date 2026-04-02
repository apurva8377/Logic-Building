/////////////////////////////////////////////////////////////
//
//  File Name : Program234.c
//  Description : Programs on file handeling
//  Name : Apurva Vilas Shinde
//  Date : 31/3/2026
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_WRONLY | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is succsesfully opened with fd : %d\n",fd);

        iRet = write(fd, Buffer,strlen(Buffer));

        printf("%d bytes gets written successfully\n",iRet);
        
        close(fd);
    }

    return 0;
}