#include<iostream>
using namespace std;
class metrix
{
    public:

        int a[3][3],i,j,row=0,col=0;

            int input()
            {
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        if(i<3 && j==0)
                        {
                            row++;
                        }
                        if(i==0 && j<3)
                        {
                            col++;
                        }
                            cout<<"a"<<"["<<i<<"]"<<"["<<j<<"] :";
                            cin>>a[i][j];
                        
                    }
                }
                cout<<endl;
            }
            
            int output()
            {
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        cout<<"a"<<"["<<i<<"]"<<"["<<j<<"] :"<<a[i][j]<<endl;
                        
                    }
                }

                cout<<"row is :"<<row<<endl;
                cout<<"colum is :"<<col;
            }

};
int main()
{
    metrix p;
    p.input();
    p.output();
}