/////////////////////////////////////////////////////////////
//
//  File Name : Program238.c
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

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is opened succsesfully with fd : %d\n",fd);

        iRet = read(fd,Buffer,11);
        printf("%d bytes gets read succsesfully\n",iRet);
        printf("Data from file is : %s\n",Buffer);

        close(fd);

        fd = open(Fname,O_RDONLY);

        iRet = read(fd,Buffer,20);
        printf("%d bytes gets read succsessfully\n",iRet);
        printf("Data from the file is : %s\n",Buffer);

        close(fd);
    }

    return 0;
}