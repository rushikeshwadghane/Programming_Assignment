#include<stdio.h>
int Reverse(int No)
{
   static int Rev=0;
   int i=0;

    if(No!=0)
    {
        i=No%10;
        Rev = Rev*10+i;
        No = No/10;
        Reverse(No);
    }
    return Rev;
}
int main()
{
    int Value=0;
    printf("Enter Number:");
    scanf("%d",&Value);

    int iret = Reverse(Value);
    printf("Reverse digit of Number is:%d\n",iret);
    return 0;
}