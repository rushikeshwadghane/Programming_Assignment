#include<iostream>
using namespace std;

template<class T>
int  SearchOccure(T Arr[],T Check)
{
    int iCnt=0;
    for(int i = 0; i < 3; i++)
    {
        if(Check==Arr[i])
        {
            iCnt=i;
        }
    }
    return iCnt;
}

int main()
{
    int Brr[]= {10,20,30};
    int ret = SearchOccure(Brr,10);

    cout<<"last Occureance is : "<<ret<<endl;

    return 0;
}