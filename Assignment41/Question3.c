#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSmall(char fname[])
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
            if(Data[i]==' ')
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

    printf("Enter the file name:\n");
    scanf("%s",fname);
   int iRet= CountSmall(fname);
    
    printf("Number of Small Character:%d\n",(iRet));
     return 0;
}