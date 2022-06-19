#include<stdio.h>
int  Display(char *str)
{
    static int Count=0;
    int i=0;
    if(*str!='\0')
    {
        if(*str>='a' && *str <='z')
        {
            Count++;
        }
        str++;
        Display(str);
    }
    return Count;
}
int main()
{
    char arr[20];
    int iret=0;
    printf("Enter String:");
    scanf("%[^\n]s",arr);
    iret = Display(arr);

    printf("number of small character in string: %d\n",iret);
    return 0;
}