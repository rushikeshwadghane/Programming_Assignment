#include<stdio.h>
int SumofNonFact(int iNo)
{
    int i=0,iAns=0;
    for(i=1;i<=(iNo);i++)
    {
        if(iNo%i>0){
            iAns=iAns+i;
        }
    }
    return iAns;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= SumofNonFact(iValue);
    printf("Sum of non factorial : %d\n",iRet);
    return 0;
}