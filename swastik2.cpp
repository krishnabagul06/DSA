#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                if(j==1 || j>=n)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        if(i>1 && i<n)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                if(j==1 || j==n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        if(i==n)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                cout<<"* ";
            }
        }
        if(i>n && i<2*n-1)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                if(j==n || j==2*n-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        if(i==2*n-1)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                if(j<=n || j==2*n-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}