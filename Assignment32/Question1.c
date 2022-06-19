#include<stdio.h>
#include<stdbool.h>
bool CheckBit(int iNO,int Pos)
{
        int Mask = 0X00000001;
        Mask = Mask << (Pos-1);
        int iResult = iNO&Mask;
    if(iResult==0)
    {
        return false;
    }        
    else{
        return true;
    }

}
int main()
{
    int  Value=0,iPos=0;
    printf("Enter Number:");
    scanf("%d",&Value);
    printf("Enter Position:");
    scanf("%d",&iPos);
    bool bret = CheckBit(Value,iPos);

    if(bret == true)
    {
        printf("%d Number Posion is On:\n",iPos);
    }
    else
    {
         printf("%d Number Posion is Off:\n",iPos);

    }
       return 0;
}

