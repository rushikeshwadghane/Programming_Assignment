#include<stdio.h>

void ChangeAlpha(char *ch)
{
    if(*ch>='A' && *ch<='Z')
    {
        *ch = *ch+32;
    }
    else if(*ch>='a'&& *ch<='z')
    {
        *ch = *ch-32;
    }
    else{
        return;
    }

}
int main()
{
    char cValue = '\0';
    printf("ENter character: ");
    scanf("%c",&cValue);
    ChangeAlpha(&cValue);

    printf("After chnage: %c \n",cValue);

}