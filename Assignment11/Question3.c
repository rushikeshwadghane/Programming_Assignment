#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
    int iCnt=0,iMax=0,iMin=0,iDiff=0;
    iMax=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }

    iDiff=iMax-iMin;

    return iDiff;
}


int main()
{  
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0,iRet=0;
    printf("Enter number of elemet:\n");
    scanf("%d",&iSize);

    ptr= (int*)malloc(iSize * sizeof(int));

    printf("Entr element:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet =Diffrence(ptr,iSize);

    printf("Diffrence between max and min :%d\n",iRet);

    free(ptr);
    return 0;
}