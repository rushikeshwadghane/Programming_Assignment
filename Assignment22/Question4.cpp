#include<iostream>
using namespace std;

bool CheckAlpha(char ch)
{
    if((ch>='a' && ch<= 'z'))
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
        cout<<"Character is small.\n";
    }
    else
    {
        cout<<"Character is Capital.\n";
    }
    return 0;
}