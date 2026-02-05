#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {

        // FIRST & LAST ROW → full stars
        if (i == 1 || i == N) {
            for (int j = 1; j <= N; j++) {
                cout << "*\t";
            }
        }

        // MIDDLE ROW → only 2 stars
        else if (i == (N + 1) / 2) {
            cout << "*\t";
            for (int j = 1; j <= N - 2; j++) {
                cout << "\t";
            }
            cout << "*\t";
        }

        // UPPER & LOWER PART (except middle)
        else {
            cout << "*\t*\t";                 // first two stars

            for (int j = 1; j <= N - 4; j++)  // middle gap
                cout << "\t";

            cout << "*\t*\t";                 // last two stars
        }

        cout << endl;
    }

    return 0;
}