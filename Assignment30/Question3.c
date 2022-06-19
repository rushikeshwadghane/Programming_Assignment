#include<stdio.h>
#include<stdbool.h>
 bool CheckBit(int iNO)
{
    int Mask=0X00200010 ,Result=0;
    Result = iNO&Mask;
    if(Result==0)
    {
        return false;
    }
    else{
            return true;
        }

}
int main()
{
    int Value=0;
    printf("Enter Number:");
    scanf("%d",&Value);
    int bret = CheckBit(Value);

       if(bret== true)
       {
           printf("Bit is On.\n");
       }
       else
       {
        printf("Bit is off\n");
       }
       return 0;
}

