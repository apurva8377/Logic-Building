/////////////////////////////////////////////////////////////
//
//  File Name : Program247.c
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
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0;
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
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        
        printf("Number of capital character are : %d\n",iCapCount);
        
        close(fd);
    }

    return 0;
}