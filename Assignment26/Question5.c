#include<stdio.h>

void reverse(char *ptr)
{
    char * start = ptr;
    char *end = ptr;
    int temp=0;
    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start<end)
    {
        temp=*start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[20];
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    reverse(Arr);    
    printf("String After reverse: %s\n",Arr);
    return 0;
}