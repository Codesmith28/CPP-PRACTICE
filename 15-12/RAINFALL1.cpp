#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;

        if (r < 3)
        {
            cout << "LIGHT" << endl;
        }

        else if (r >= 3 && r < 7)
        {
            cout << "MODERAATE" << endl;
        }

        else
        {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}