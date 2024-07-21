#include<iostream>
using namespace std;
class fibo
{
    public:

        int i,n,a,b,c;

        fibo()
        {
            a=0;
            b=1;
        }

            void input()
            {
                cout<<"enter one number :";
                cin>>n;

                    for(i=1; i<=n; i++)
                    {
                        cout<<a; 
                        c=a+b;    
                        a=b;     
                        b=c;     

                    }
            }
};
int main()
{
    fibo p;
    p.input();
}