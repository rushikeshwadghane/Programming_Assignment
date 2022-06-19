#include<stdio.h>

int CountCapital(char * str,char ch)
{
    int Count=0;
    while (*str!='\0')
    {
        if(*str==ch)
        {
            Count++;
        }
        str++;
    }
    return Count;
}
int main()
{
    char Arr[20];
    char cValue='\0';
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    printf("Enter Character for Search:");
    scanf("%s",&cValue);
    int iRet = CountCapital(Arr,cValue);

    printf("%c character conatin in string %d times.\n",cValue,iRet);

    return 0;
}