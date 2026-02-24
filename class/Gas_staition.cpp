#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int bachihuyigas = 0;
        int ans = 0;

        for (int i = 0; i < gas.size(); i++) {
            total += (gas[i] - cost[i]);
            bachihuyigas += (gas[i] - cost[i]);

            if (bachihuyigas < 0) {
                ans = i + 1;
                bachihuyigas = 0;
            }
        }

        if (total >= 0) {
            return ans;
        }
        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int result = obj.canCompleteCircuit(gas, cost);

    cout << "Starting index: " << result << endl;

    return 0;
}