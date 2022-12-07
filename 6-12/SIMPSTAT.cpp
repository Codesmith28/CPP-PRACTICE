#include <iostream>
using namespace std;
// sorting array function
void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

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

        sort(a, n);
        int m = k;
        while (k > 0)
        {
            a[k - 1] = 0;
            a[n - k] = 0;
            k--;
        }

        float sum = 0;

        for (int i = 0; i < k; i++)
        {
            a[i] = 0;
            a[n - i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        int b = n - (2 * m);
        float avg = sum / b;
        cout << avg << endl;
    }
    return 0;
}

