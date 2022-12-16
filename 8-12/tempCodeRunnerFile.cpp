#include <bits/stdc++.h>
using namespace std;

int summa(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n, k, v;
    cin >> n >> k >> v;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currsum = summa(a, n);

    int oldsum = (n + k) * v;

    int diff = oldsum - currsum;

    if (diff % k == 0)
    {
        cout << diff / k << endl;
    }

    else
    {
        cout << -1 << endl;
    }

    return 0;
}