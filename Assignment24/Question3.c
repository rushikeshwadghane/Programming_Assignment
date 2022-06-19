#include<stdio.h>

int CountCapital(char * str)
{
    int iCap=0,iSmall=0,iDiff=0;
    while (*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            iCap++;
        }
        else if(*str>='a'&& *str<='z')
        {
            iSmall++;
        }
        str++;
    }
    iDiff  = iSmall-iCap;
    return iDiff;

}

int main()
{
    char Arr[20];
    printf("Enter Stirng: ");
    scanf("%[^\n]s",Arr);
    int iRet = CountCapital(Arr);

    printf("Diffrence between Capital Letter and Small letter in given String:%d\n",iRet);

    return 0;
}