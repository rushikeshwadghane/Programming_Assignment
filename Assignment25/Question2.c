#include<stdio.h>
#include<stdbool.h>

bool CountCapital(char * str,char ch)
{
    int Count=0;
    while (*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return false;
    }
    else{
        return true;
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
    bool iRet = CountCapital(Arr,cValue);
    if(iRet==true)
    {
        printf("Character present in  String:\n");
    }
    else{
        printf("Character not present in string.\n ");
    }

    return 0;
}