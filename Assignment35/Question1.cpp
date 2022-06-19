#include<iostream>
using namespace std;

template<class T>
void Display(T Value,int  No)
{
   for(int i=0;i<No;i++)
   {
       cout<<Value<<" ";
   }
}

int main()
{
    
    Display('R',7);
    return 0;
}