#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=1,iNo2=2;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)        
        {
            if(i%2==0)
            {
                printf("%d\t",iNo);
                iNo=iNo+2;
            }
            else
            {
                printf("%d\t",iNo2);
                iNo2=iNo2+2;
            }
        }  
        printf("\n");
        iNo=1,iNo2=2;
    }
}

int main()
{
    int iValue1=0,iValue2=0;\
    printf("Enter row and Column:\n");
    scanf("%d%d",&iValue1,&iValue2);
    Display(iValue1,iValue2);

    return 0;
}