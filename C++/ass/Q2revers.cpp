#include<iostream>
using namespace std;
class rev
{
        public:

            int n,r;

            void input()
            {
                cout<<"Enter Number :";
                cin>>n;
            }

            void display()
            {
                while(n>0)
                {
                    r = n % 10;
                    cout<<r;
                    n=n/10;
                }
            }
};
int main()
{
    rev p;
    p.input();
    p.display();
}