#include<stdio.h>
int MultiFact(int iNo)
{
    int i=0,iAns=1;
    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo%i==0){
            iAns=iAns*i;
        }
    }
    return iAns;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= MultiFact(iValue);
    printf("MUltiplication of factorial: %d\n",iRet);
    return 0;
}