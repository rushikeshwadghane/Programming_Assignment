#include<stdio.h>
int  Display(char *str)
{
    static int Count=0;
    int i=0;
    if(*str!='\0')
    {
        if(*str==' ')
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

    printf("sum of white space in string: %d\n",iret);
    return 0;
}