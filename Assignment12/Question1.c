#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0,iAscii=65;
    for(iCnt=0;iCnt<iNo && iAscii<=90;iCnt++)
    {
        printf(" %c ",iAscii);
        iAscii++;
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