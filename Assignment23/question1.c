#include<stdio.h>
void Display()
{
    printf("Ascii Table:\n");
    int i=0;
    for(i=32;i<=127;i++)
    {
        printf("'%c' ",i);
    }
    printf("\n");
}
int main()
{
    Display();
    return 0;
}