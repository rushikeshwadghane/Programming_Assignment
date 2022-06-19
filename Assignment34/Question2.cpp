#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[])
{
    T Max= Arr[0];
    for(int i = 0; i < 3; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Brr[]= {10,20,30};
    int ret = Maximum(Brr);

    cout<<"Maximum is : "<<ret<<endl;

    return 0;
}