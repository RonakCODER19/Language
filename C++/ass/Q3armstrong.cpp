#include<iostream>
using namespace std;

class arm
{
        public:

        int n,r,rev,am;

   
        void input()
        {
            cout<<"Enter any number :";
            cin>>n;

            am=n;

            while(n>0)
            {
                 r = n % 10;
                 rev = rev+(r*r*r);
                 n= n /10;
            }
            
            if(rev==am)
            {
                cout<<"its armstorm number ";
            }
            else
                cout<<"its not armstorm number ";
        }

    


};
int main()
{
    arm p;
    p.input();
}