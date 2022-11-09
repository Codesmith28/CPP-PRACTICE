#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        int S[N], R[N];

        for (int i = 0; i < N; i++)
        {
            cin >> S[i] >> R[i];
        }

        int mx = INT_MIN;

        for (int i = 0; i < N; i++)
        {
            if (S[i] <= X)
            {
                mx = max(mx, R[i]);
            }
        }
        cout << mx << endl;
    }
    return 0;
}