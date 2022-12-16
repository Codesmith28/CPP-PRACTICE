#include <bits/stdc++.h>
using namespace std;

bool pallindrome(int n)
{
    int temp = n;
    int ans = 0;
    while (n)
    {
        int r = n % 10;
        ans = ans * 10 + r;
        n = n / 10;
    }
    if (ans == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;

        for (int i = l; i <= r; i++)
        {
            if (pallindrome(i))
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}