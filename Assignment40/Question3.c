#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#define FILESIZE 1024

void Display(char Fname[])
{
    int Fd=0,iret=0;
    char Data[FILESIZE];
    Fd = open(Fname,O_RDWR);
    if(Fd== -1)
    {
        printf("Unable to open file:\n");
    }
    while((iret = read(Fd,Data,sizeof(Data)))!= 0)
    {
        write(1,Data,iret);
    }
    close(Fd);
}
int main()
{
    char Fname[30];
    printf("Enter file name to read the data:\n");
    scanf("%s",Fname);

    Display(Fname);
    return 0;
}
