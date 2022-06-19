#include<stdio.h>
#include<stdbool.h>
 int  CheckBit(int iNO)
{
    int Mask=0XFFFFFFBF,Result=0;
    Result = iNO&Mask;
    

    return Result;

}
int main()
{
    int  Value=0;
    printf("Enter Number:");
    scanf("%d",&Value);
    int bret = CheckBit(Value);

    printf("After 7th bit OFF Number is: %d",bret);
       return 0;
}

