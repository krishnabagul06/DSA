#include<iostream>
using namespace std;
int main()
{
    int n,k,remender,reverse=0;
    cin>>n;
    while(n!=0){
        k=n%10;
        reverse=reverse+k;
        n=n/10;
    }
    cout<<abs(reverse);
    return 0;

} 