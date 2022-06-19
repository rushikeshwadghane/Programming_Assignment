#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    for(i=0;i<iNo;i++){
        printf("* ");
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter no:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}