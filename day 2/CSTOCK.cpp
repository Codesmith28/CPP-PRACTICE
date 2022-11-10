#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;

        if (a <= ((100 * s + c * s) / 100) && ((100 * s + c * s) / 100) <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}