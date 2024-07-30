#include<iostream>
using namespace std;

class swp
{
    public:

        int a,b;

            void input()
            {
                cout<<"enter any number for A:";
                cin>>a;
                cout<<"enter anu number for B:";
                cin>>b;      
            }
    
            void output()
            {
                a = a + b;
                b = a - b;
                a = a - b;

                cout<<"A:"<<a<<endl<<"B:"<<b;
            }
};
int main()
{
    swp p;
    p.input();
    p.output();

}
