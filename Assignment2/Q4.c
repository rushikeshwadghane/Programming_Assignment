#include<stdio.h>
void Display(int iNo,int frequency)
{
    int i=0;
    if(frequency<0)
    {
        frequency= -frequency;
    }
    for (i=0;i<frequency;i++)
    {
        printf("%d ",iNo);
    }
    printf("\n");
}
int main()
{
    int iValue=0,iCnt=0;
    printf("Enter two Number:\n");
    scanf("%d %d",&iValue,&iCnt);
    Display(iValue,iCnt);
    return 0;
}