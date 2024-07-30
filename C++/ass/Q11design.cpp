/*
    1
    1 0
    1 0 1
    1 0 1 0

*/
#include<iostream>
using namespace std;

class design
{
    public:
        int i,n,j;

        void input()
        {
            cout<<"Enter any number :";
            cin>>n;
        }
        void display()
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                {
                     if(j % 2 == 0)
                     {
                        cout<<"0";
                     }
                     else
                        cout<<"1";
                }cout<<endl;
            }
        }

};
int main()
{
    design p;
    p.input();
    p.display();
}