#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // 1 goal === 20 points
        // 1 foul === -10 points
        // -ve score === 0

        int sum = 0;
        int maxsu = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            sum = a[i] * 20 - b[i] * 10;
            maxsu = max(sum, maxsu);
        }

        if (maxsu < 0)
        {
            cout << 0 << endl;
        }

        else
        {
            cout << maxsu << endl;
        }
    }
    return 0;
}