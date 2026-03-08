#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count0 = 0, count1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            count0++;
        else
            count1++;
    }

    for(int i = 0; i < count0; i++)
    {
        cout << 0 << " ";
    }

    for(int i = 0; i < count1; i++)
    {
        cout << 1 << " ";
    }

    return 0;
}