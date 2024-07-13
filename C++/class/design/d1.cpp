#include<iostream>
using namespace std;

class design
{
    public:

    int i,j,n;

        int in()
        {
            cout<<"Enter :";
            cin>>n;    
        }

        int ou()
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
};
int main()
{
    design p;
    p.in();
    p.ou();
}