#include<stdio.h>
int Maximum(int No)
{
   static int max=0;
   int i=0;

    if(No!=0)
    {
        i=No%10;
        if(max<i)
        {
            max = i;
        }
        No = No/10;
        Maximum(No);
    }
    return max;
}
int main()
{
    int Value=0;
    printf("Enter Number:");
    scanf("%d",&Value);

    int iret = Maximum(Value);
    printf("Maximum digit of Number is:%d\n",iret);
    return 0;
}