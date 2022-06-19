#include<stdio.h>

int LastOccure(char *str,char ch)
{
    int Count=-1,index=0;
    while (*str!='\0')
    {
        Count++;
        if(*str==ch)
        {
         index=Count;   
        }
        str++;
    }
    if(index==0)
    {
        return -1;
    }
    else
    {
        return index;   
    }
}

int main()
{
    char Arr[20];
    char cValue='\0';
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    printf("Enter Character for Search:");
    scanf("%s",&cValue);
    int iRet = LastOccure   (Arr,cValue);

    printf("%c character last occur at insex %d \n",cValue,iRet);

    return 0;
}