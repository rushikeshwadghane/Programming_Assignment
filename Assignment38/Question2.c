#include<stdio.h>
int  Display(int No)
{
    static int Sum=0,i=0;
    if(No!=0)
    {
        i = No%10;
        Sum = Sum+i;
        No = No/10;
        Display(No);
    }
    return Sum;
}
int main()
{
    int iValue=0;
    int iret=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    iret = Display(iValue);

    printf("sum of Digit in Nmber: %d\n",iret);
    return 0;
}