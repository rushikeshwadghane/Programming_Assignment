#include<stdio.h>
#include<stdlib.h>

int Multiplication(int Arr[],int iLenght)
{
    int iCnt=0;
    int iMult=1;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        iMult=iMult*Arr[iCnt];
    }
    return iMult;
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

    iRet =Multiplication(ptr,iSize);

    printf("Multiplication  of Odd number in array is:%d\n",iRet);
    free(ptr);
    return 0;
}