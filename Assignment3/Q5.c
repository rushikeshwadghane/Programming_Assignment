#include<stdio.h>
int FactDiff(int iNo)
{
    int i=0,iFact=0,iNonFact=0,iAns=0;
    for(i=1;i<(iNo);i++)
    {
        if(iNo%i==0)
        {
            iFact=iFact+i;
        }
        else
        {
             iNonFact=iNonFact+i;
        }
    }
    iAns=iFact-iNonFact;
    return iAns;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    iRet= FactDiff(iValue);
    printf("Diffrence between sumation of fact and non fact : %d\n",iRet);
    return 0;
}