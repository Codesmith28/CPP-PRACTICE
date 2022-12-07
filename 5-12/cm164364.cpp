#include <iostream>
using namespace std;

int dis(int arr[], int n)
{
    int i, j, count = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /* total chocolates n
        to save atleast x chocolates
        print the maximum number of distinct flavors she can try */

        /* can find the total distinct elements and work on it */

        int d = dis(a, n);
        int m = n - x;

        if (m > d)
        {
            cout << d << endl;
        }

        else if (m == d)
        {
            cout << d << endl;
        }

        else if (m < d)
        {
            cout << m << endl;
        }
    }
    return 0;
}
