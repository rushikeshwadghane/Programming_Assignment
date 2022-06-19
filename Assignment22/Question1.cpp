#include<iostream>
using namespace std;

bool CheckAlpha(char ch)
{
    if((ch>='A' && ch<= 'Z')||(ch>='a' && ch<='z'))
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
        cout<<"It is a character.\n";
    }
    else
    {
        cout<<"It is not character.\n";
    }
    return 0;
}