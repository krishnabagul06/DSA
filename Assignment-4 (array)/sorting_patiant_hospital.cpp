#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> x;

        if(x == 0)
            count0++;
        else if(x == 1)
            count1++;
        else
            count2++;
    }

    for(int i = 0; i < count0; i++)
        cout << 0 << endl;

    for(int i = 0; i < count1; i++)
        cout << 1 << endl;

    for(int i = 0; i < count2; i++)
        cout << 2 << endl;

    return 0;
}