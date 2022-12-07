#include <iostream>
using namespace std;

// sorting the array:
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
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
        int n, w;
        cin >> n >> w;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // to print the number of holidays
        // we can add the largest numbers of an array and check whether it is exceeding w or not
        sort(a, n);
        int sum = 0;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum = sum + a[i];
            count++;
            if (sum >= w)
            {
                break;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}