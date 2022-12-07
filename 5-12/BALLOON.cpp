#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // "problems 1 to 7 appear among the first 8 problems"
        // check upto what extent the elements from 1 to 7 are included

        /* 1 2 3 4 5 7 6
        8 7 6 5 4 3 2 1
        7 4 3 5 6  1 8 2 9 */
        int maxi = 0;
        int id;
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    id = j;
                }
            }
            maxi = max(maxi, id);
        }

        cout << maxi + 1 << endl;
    }
    return 0;
}