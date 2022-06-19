#include<stdio.h>

int CountCapital(char * str)
{
    int Count=0;
    while (*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
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
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    int iRet = CountCapital(Arr);

    printf("%d Capital Letter in given String.\n",iRet);

    return 0;
}