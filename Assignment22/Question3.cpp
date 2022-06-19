#include<iostream>
using namespace std;

bool CheckAlpha(char ch)
{
    if(ch>=0&& ch<='9')
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
        cout<<"It is  Digit\n";
    }
    else
    {
        cout<<"It is not Digit.\n";
    }
    return 0;
}