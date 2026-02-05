#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //FLAG OR monitor
    bool ans=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ans=false;
            break;
        }
        if(!ans)
        {
            cout<<"prime Nhi h";
        }
        else{
            cout<<"prime h";
        }
        return 0;
    }
}