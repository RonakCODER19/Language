#include<iostream>
using namespace std;
class matrix
{
    public:

        int a[3][3],i,j;
            int row,col;
        
        matrix()
        {
            col=0;
        }
        void input()
        {
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(i<3 && j==0)
                    {
                        row++;
                    }
                    if(j<3 && i==0)
                    {
                        col++;
                    }
                    cout<<"a"<<"["<<i<<"]"<<"["<<j<<"]:";
                    cin>>a[i][j];
                }
                cout<<endl;
            }
        }
        void output()
        {
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    cout<<a[i][j]<<" ";
                     
                }
                 cout<<endl;
            }

            cout<<"row is :"<<row<<endl<<"colume is :"<<col;
        
        }
};
int main()
{
    matrix p;
    p.input();
    p.output();
}