#include<stdio.h>
void Display()
{
    static char ch = 'a';
    if(ch<'h')
    {
        printf("%c ",ch);
        ch++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}