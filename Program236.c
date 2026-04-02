/////////////////////////////////////////////////////////////
//
//  File Name : Program236.c
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
    char Buffer[50] = {'\0'};

    printf("Enter the file name that you wnat to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);      
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is succsesfully opened with fd : %d\n",fd);

        iRet = read(fd, Buffer,11);

        printf("%d bytes gets read successfully\n",iRet);

        printf("Data from file is : %s\n",Buffer);
        
        close(fd);
    }

    return 0;
}