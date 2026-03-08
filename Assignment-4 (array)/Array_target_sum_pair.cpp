#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[1000];

    // taking array input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // sorting the array
    sort(arr, arr + n);

    // finding triplets
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n ; j++) {

            if(arr[i] + arr[j] == target) {
                    cout << arr[i] << " and " << arr[j] << endl;
                }

        }
    }

    return 0;
}