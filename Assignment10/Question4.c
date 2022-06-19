#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength,int iNo1,int iNo2)
{
    int iCnt=0;
    printf("Number between Range:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iNo1 && Arr[iCnt]<iNo2){
            printf("%d ",Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0,iStart=0,iEnd=0;
    printf("Enter Size of Array:\n");
    scanf("%d",&iSize);

     ptr =(int*) malloc(iSize* sizeof(int));
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter two number Start and End:\n");
    scanf("%d %d",&iStart,&iEnd);

    Display(ptr,iSize,iStart,iEnd);

    free(ptr);
    return 0;
}