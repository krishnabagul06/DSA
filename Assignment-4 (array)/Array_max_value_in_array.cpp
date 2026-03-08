#include<iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];   // assume first element is maximum

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findMax(arr, n);

    return 0;
}