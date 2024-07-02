/*
    Enter : 5

        * * * * *
        
        * * * * *
    
        * * * * *
*/
#include<iostream>
using namespace std;

int main()
{
    int i,n,j;

    cout<<"Enter any Number :";

    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==2 || i==4)
            {
                 cout<<" ";
            }
            else

                 cout<<" * ";
        }
        cout<<endl;
    }

}