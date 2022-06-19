#include<iostream>
using namespace std;

template<class T>
T Multiplication(T No1,T No2)
{
   T ans;
   ans = No1*No2;
   return ans;
}

int main()
{
    int iret = 0;
    iret = Multiplication(10,20);
    cout<<"Multiplication of Integer:"<<iret<<endl;

    float fret = 0.0;
    fret= Multiplication(10.5,4.23);
    cout<<"Multiplication of Integer:"<<fret<<endl;


    return 0;
}