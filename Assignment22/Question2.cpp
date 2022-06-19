#include<iostream>
using namespace std;

bool CheckAlpha(char ch)
{
    if((ch>='A' && ch<= 'Z'))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char cValue = '\0';
    cout<<"Enter Character:"<<endl;
    cin>>cValue;

    bool bret = CheckAlpha(cValue);
    if(bret == true)
    {
        cout<<"Character is Capital.\n";
    }
    else
    {
        cout<<"Character is small.\n";
    }
    return 0;
}