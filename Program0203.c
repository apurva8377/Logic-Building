/////////////////////////////////////////////////////////
//
//  Program Name  : Program0203.c
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
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[] = "India is my country";

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }
    
    iRet = write(fd,Data,11); 

    printf("%d bytes gets succsesfully written\n",iRet);

    close(fd);
    
    return 0;
}
