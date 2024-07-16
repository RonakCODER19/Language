#include<iostream>
using namespace std;
class papa
{
    protected:

    string surname="hedambha";

};
class san1:papa
{
    public:
        void show()
        {
            cout<<"ronak"<<surname;
        }
};
class san2:papa
{
    public:

        void disp()
        {
            cout<<"ronit"<<surname;
        }

};

int main()
{
    san1 s1;
    san2 s2;

        s1.show();
        cout<<endl;
        s2.disp();
}