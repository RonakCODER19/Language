#include<iostream>
using namespace std;

int main()
{
    int i,j,a[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"a"<<"="<<i<<j<<":";
            cin>>a[i][j];

        }
        cout<<endl;
    }


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==0 && j==0 || i==1 && j==0 || i==2 && j==0)
            {
                cout<<"|";
            }
            
            cout<<a[i][j];
            
             if(j==2 && i==0 || j==2 && i==1 || j==2 && i==2)
            {
                cout<<"|";
            }
        }
        cout<<endl;
    }

}