#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

// sorting the array:
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // one coupon for 50% off
        sort(a,a+n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            // reducing amo of money and adding to gifts

            // first priority
            if (k >= a[i])
            {
                k = k - a[i];
                count++;
            }

            // if k is short or has exhausted enough then it won't satisfy prev if and thus the following will work
            else if (k >= (a[i] + 1) / 2)
            {
                count++;
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
