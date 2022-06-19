#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=1,Count=0;
    while(Count<iNo)
    {
        if(iCnt%2==0)
        {
            printf("%d ",iCnt);
            Count++;
        }
        iCnt++;
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}