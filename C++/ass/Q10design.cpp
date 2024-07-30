/*
    1
    21
    321
    4321
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
                        for(j=i; j>=1; j--)
                        {
                            cout<<j;
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
