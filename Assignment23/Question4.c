#include<stdio.h>

void Display(char ch)
{
    if((ch>='A' && ch<='Z')||(ch>='a'&& ch<='z'))
    {
        while ((ch!='Z')&& (ch!='z'))
        {
            printf("%c, ",ch);
            ch++;
        }
        printf("%c. \n",ch);
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
    Display(cValue);

    return 0;
}