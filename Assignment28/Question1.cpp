
#include<iostream>
using namespace std;
void  strcpyX(char *src,char *dest)
{
    int temp = *src;
    while (*src!='\0')
    {
        src++;
    }
    src--;   
    while (*src!=temp)
    {
        *dest=*src;
        dest++;
        src--;
    }
    *dest=temp;
     dest++;
     *dest='\0';

}
int main()
{
    char Arr[30];
    char Brr[30];
    cout<<"Enter String"<<endl;
    cin.getline(Arr,30);
    strcpyX(Arr,Brr);
    cout<<"String after copy:"<<Brr<<endl;
    return 0;
}