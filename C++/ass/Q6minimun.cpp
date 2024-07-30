#include<iostream>
using namespace std;

class mini
{
    public:

        int a,b,c;

        void input()
        {
            cout<<"Enter first number :";
            cin>>a;

            cout<<"Enter seconde number :";
            cin>>b;

            cout<<"Enter third number :";
            cin>>c;
        }
        void output()
        {
           if(a<b && a<c)
           {
                cout<<"first is minimum";
           }
            else if(b<a && b<c)
           {
                cout<<"seconde is minimum";
           }

            else
                cout<<"third is minimum";
           
        }
};
int main()
{
        mini p;
        p.input();
        p.output();   
}