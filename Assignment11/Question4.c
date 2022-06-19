#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{ 
    int iCnt=0,iDigit=0,Count=0,temp=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        temp=Arr[iCnt];
        while(temp>0)
        {
          Count++;
          temp=temp/10;
         
        }
          if(Count==3)
          {
              printf("%d ",Arr[iCnt]);
          }  
          Count=0;
    }
    
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
    Display(ptr,iSize);
    free(ptr);
    return 0;
}