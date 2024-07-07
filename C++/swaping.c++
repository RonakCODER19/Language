#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"enter value of A :";
    cin>>a;

    cout<<"enter value of B :";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"A :"<<a<<endl<<"B :"<<b;
}