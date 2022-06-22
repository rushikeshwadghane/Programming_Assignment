#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char fname[30];
    int fd= 0;

    printf("Enter the file name:");
    scanf("%s",fname);
    fd = creat(fname,0777);
    if(fd== -1)
    {
        printf("Unaable to open file");
        return -1;
    }
    else
    {
        printf("File is open successfully:%d\n",fd);
    }
    return 0;
}