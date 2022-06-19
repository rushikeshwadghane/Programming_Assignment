#include<stdio.h>
void Display()
{
    static int  i=0;
    int No=5;
    if(i<=No)
    {
        printf("%d",i);
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}