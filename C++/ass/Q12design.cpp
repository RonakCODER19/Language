/* j 1 2 3
   1 *
   2* *
  3* * *
*/
#include<iostream>
using namespace std;

class design
{
    public:
        int i,n,j;
            int sp,p;

        void input()
        {
            cout<<"Enter Any number :";
            cin>>n;
            p=n;
        }
        void display()
        {
            for(i=1; i<=n; i++)
            {
                for(sp=1; sp<=p; sp++)
                
                    cout<<" ";
                    for(j=1; j<=i; j++)
                    {
                        if(j==1 || j==i ||i==n )
                        cout<<" *";
                        else
                            cout<<"  ";
                    }cout<<endl;
                p--;
                
            }
        }
};
int main()
{
    design p;
    p.input();
    p.display();
}