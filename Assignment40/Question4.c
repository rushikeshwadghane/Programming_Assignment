#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#define FILESIZE 1024

int Display(char Fname[])
{
    int Fd=0,iret=0,iSum=0;
    char Data[FILESIZE];
    Fd = open(Fname,O_RDWR);
    if(Fd== -1)
    {
        printf("Unable to open file:\n");
    }
    while((iret = read(Fd,Data,sizeof(Data)))!= 0)
    {
        iSum = iSum+iret;
    }
    return iSum;
    close(Fd);
}
int main()
{
    int iSize=0;
    char Fname[30];
    printf("Enter file name to read the data:\n");
    scanf("%s",Fname);
    iSize =  Display(Fname);
    printf("Size of file : %d\n",iSize);
    
    return 0;
}
