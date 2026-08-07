/////////////////////////////////////////////////////////
//
//  Program Name  : Program0205.c
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
    char Data[50];

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }
    
    iRet = read(fd,Data,5); 

    printf("%d bytes gets succsesfully read\n",iRet);

    printf("Data from file : %s\n",Data);

    close(fd);
    
    return 0;
}
