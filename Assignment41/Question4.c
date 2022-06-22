#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountChar(char fname[],char ch)
{
    int fd=0;
    char Data[10];
    int iret=0;
    int iSum=0,i=0;
    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to create file\n");

         return -1;
    }
    printf("File is Opend Succesfully FD: %d\n",fd);
    while((iret = read(fd,Data,sizeof(Data)))!=0)
    {
        for(i=0;i<iret;i++)
        {
            if(Data[i]=='ch')
            {
                iSum++;
            }
        }
    }

    close(fd);
    return iSum;
}

int main()
{
    char fname[30];
    int iRet=0;
    char ch = '\0';
    printf("Enter the file name:\n");
    scanf("%s",fname);
    printf("Enter Character to search:\n");
    scanf("%c",ch);
    iRet= CountChar(fname,ch);
    
    printf("Number of time Character:%d\n",(iRet));
     return 0;
}