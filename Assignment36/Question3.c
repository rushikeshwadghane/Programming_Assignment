#include<stdio.h>
void Display()
{
    static int  i=5;
    if(i>0)
    {
        printf("%d ",i);
        i--;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}