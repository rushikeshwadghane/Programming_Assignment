#include<stdio.h>
int Minimum(int No)
{
   static int min=0;
   int i=0;
    if(min==0)
    {
        min = No%10;
    }
    else if(No!=0)
    {
        i=No%10;
       printf("%d",i);

        if(min>i)
        {
            min = i;
        }
        No = No/10;
        Minimum(No);
    }
    return min;
}
int main()
{
    int Value=0;
    printf("Enter Number:");
    scanf("%d",&Value);

    int iret = Minimum(Value);
    printf("Minimum digit of Number is:%d\n",iret);
    return 0;
}