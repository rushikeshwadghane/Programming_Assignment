#include<stdio.h>
int  CheckBit(int iNO,int Pos)
{
        int Mask = 0XFFFFFFFE;
        Mask = Mask << (Pos-1);
        int iResult = iNO & Mask;
        return iResult;
}
int main()
{
    int  Value=0,iPos=0;
    int iret=0;
    printf("Enter Number:");
    scanf("%d",&Value);
    printf("Enter Position:");
    scanf("%d",&iPos);
    iret = CheckBit(Value,iPos);

    printf("Value after change: %d \n",iret); 
    return 0;
}

