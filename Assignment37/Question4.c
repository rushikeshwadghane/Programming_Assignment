#include<stdio.h>
void Display(char No)
{
    static char cch = 'A';
    if(cch <= No)

    {
        printf("%c ",cch);
        cch++;
        Display(No);
    }
}
int main()
{
    char ch = '\0'; 
    printf("Enter character :");
    scanf("%c",&ch);
    Display(ch);
    
    return 0;
}
