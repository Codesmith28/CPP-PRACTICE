#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int x = max(A, max(B, C));
        int y;
        if (x == A)
        {
            y = max(B, C);
        }
        else if (x == B)
        {
            y = max(A, C);
        }
        else
        {
            y = max(B, A);
        }

        cout << x + y << endl;
    }
    return 0;
}