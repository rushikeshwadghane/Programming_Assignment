#include<stdio.h>
void PrintEven(int iNo)
{
    int i=1,iCnt=1;
    while (iCnt<=iNo)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            iCnt++;
        }
        i++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}