#include<stdio.h>

void Check(int iNo)
{
    if(iNo%2==0){
        printf("%d is Even Number.\n",iNo);
    }
    else{
        printf("%d is Odd Number.\n",iNo);
    }
}
int main()
{
    int iValue=0;
    printf("Enter No:");
    scanf("%d",&iValue);
    Check(iValue);
    return 0;
}