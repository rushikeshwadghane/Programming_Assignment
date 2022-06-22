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
    fd = open(fname,O_RDONLY);
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