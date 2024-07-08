#include<iostream>
using namespace std;

class sum
{
    public:

    int a,b,sum;

    void add()
    {
        cout<<"Enter A :";
        cin>>a;
        cout<<"Enter B :";
        cin>>b;

        sum=a+b;
        cout<<"sum is :"<<sum;
    }
};
int main()
{
    sum s;
    s.add();

}