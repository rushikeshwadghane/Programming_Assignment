#include<stdio.h>
int  CheckBit(int iNO)
{
        int Mask = 0X80000001;
        int iResult = iNO ^ Mask;
        return iResult;
}
int main()
{
    int  Value=0;
    int iret=0;
    printf("Enter Number:");
    scanf("%d",&Value);

    iret = CheckBit(Value);

    printf("Value after change: %d \n",iret); 
    return 0;
}

