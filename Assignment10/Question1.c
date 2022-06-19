#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool CheckValue(int *Arr,int iLength,int iNo)
{
    bool bFlag=false;
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==*Arr){
            bFlag = true;
            break;
        }
        Arr++;
    }
    return bFlag;
}
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0,iValue=0;
    bool bRet=false;
    printf("Enter Size of Array:\n");
    scanf("%d",&iSize);

     ptr =(int*) malloc(iSize* sizeof(int));
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter Number for Checking:\n");
    scanf("%d",&iValue);
    bRet = CheckValue(ptr,iSize,iValue);
    if (bRet==true)
    {
        printf("%d contain in Array.\n",iValue);
    }
    else{
        printf("%d not contain in Array.\n",iValue);

    }    
    free(ptr);
    return 0;
}