#include<stdio.h>
void  pattern(int ino1,int ino2)
{
    int i=0,j=0;
    for(i=1;i<=ino1;i++)
    {
        for(j=1;j<=ino2;j++)
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRow=0,iCol=0;
    printf("Enter row and Column:\n");
    scanf("%d %d",&iRow,&iCol);

    pattern(iRow,iCol);
    return 0;
}