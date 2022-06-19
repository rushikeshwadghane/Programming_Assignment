#include<stdio.h>
int CountCapital(char * str,char ch)
{
    int Count=-1;
    while (*str!='\0')
    {
        Count++;
        if(*str==ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return Count;
    }
}
int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    printf("Enter Character for Search:");
    scanf("%s",&cValue);
    iRet = CountCapital(Arr,cValue);
    printf("character at index: %d\n",iRet);

    return 0;
}