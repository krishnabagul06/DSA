#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0; i<n;i++)
    {
        if(ans<arr[i])
        {
            ans=arr[i];
        }
    
    }
    cout<<ans<<endl;
    return 0;
}