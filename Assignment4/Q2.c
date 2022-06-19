#include<stdio.h>
void PrintEven(int iNo)
{
    int i=1;
    for(i=1;i<=(iNo/2);i++)
    {
        if((iNo%1==0)&&(i%2==0))
        {
            printf("%d ",i);
            
        }
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