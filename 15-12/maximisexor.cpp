#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;

        int zeros = 0, ones = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }

            if (b[i] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }

        int temp = min(ones, zeros);
        string ans = "";

        for (int i = 0; i < temp; i++)
        {
            ans += '1';
        }
        for (int i = temp; i < a.length(); i++)
        {
            ans += '0';
        }

        cout << ans << endl;
    }
    return 0;
}