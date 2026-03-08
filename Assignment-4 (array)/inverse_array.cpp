#include <iostream>
using namespace std;

void invertArray(int arr[], int inv[], int n, int i) {
    
    // Base condition
    if(i == n) {
        return;
    }

    // Inversion logic
    int value = arr[i];
    inv[value] = i;

    // Recursive call
    invertArray(arr, inv, n, i + 1);
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    int inv[n];

    // Taking input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calling recursive function
    invertArray(arr, inv, n, 0);

    // Printing inverted array
    for(int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}