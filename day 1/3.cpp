#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        cin >> N >> S;
        if (N >= S)
        {
            cout << S << endl;
        }
        else
        {
            int a = S - N;
            cout << N - a << endl;
        }
    }
    return 0;
}