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

    int result[n];

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while(left <= right)
    {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if(leftSquare > rightSquare)
        {
            result[pos] = leftSquare;
            left++;
        }
        else
        {
            result[pos] = rightSquare;
            right--;
        }

        pos--;
    }

    for(int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}