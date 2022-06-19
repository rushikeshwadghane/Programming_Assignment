#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#   %d   *   ",iCnt);
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