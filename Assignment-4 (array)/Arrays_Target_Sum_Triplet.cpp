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
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {

                if(arr[i] + arr[j] + arr[k] == target) {
                    cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                }

            }
        }
    }

    return 0;
}