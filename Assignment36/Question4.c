#include<stdio.h>
void Display()
{
    static char ch = 'A';
    if(ch<'H')
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