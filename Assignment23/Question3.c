#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if((ch>32 && ch<47)|| (ch=='@'))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char cVal ='\0';
    printf("Enter Character:\n");
    scanf("%c",&cVal);
    bool bret = CheckSpecial(cVal);
    if(bret==true)
    {
        printf("It is a special Character.  \n");
    }
    else
    {
        printf("It is not special Character.\n");
    }
    return 0;
}