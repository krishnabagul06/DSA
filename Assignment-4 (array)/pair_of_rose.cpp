#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;   // number of test cases

    while(T--) {
        int N;
        cin >> N;

        vector<int> price(N);

        for(int i = 0; i < N; i++) {
            cin >> price[i];
        }

        int M;
        cin >> M;

        // sort the prices
        sort(price.begin(), price.end());

        int left = 0;
        int right = N - 1;

        int a = 0, b = 0;

        while(left < right) {
            int sum = price[left] + price[right];

            if(sum == M) {
                a = price[left];
                b = price[right];
                left++;
                right--;
            }
            else if(sum < M) {
                left++;
            }
            else {
                right--;
            }
        }

        cout << "Deepak should buy roses whose prices are " 
             << a << " and " << b << "." << endl;

        cout << endl;   // blank line after each test case
    }

    return 0;
}