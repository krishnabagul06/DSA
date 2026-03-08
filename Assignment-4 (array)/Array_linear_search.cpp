#include<iostream>
using namespace std;

int findIndex(int arr[], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == m)
        {
            return i;
        }
    }

    return -1;
}

int main() {

    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    cout << findIndex(arr, n, m);

    return 0;
}