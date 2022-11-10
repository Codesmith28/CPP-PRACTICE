<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int U, V, A, S;
        cin >> U >> V >> A >> S;

        if (V * V >= U * U - 2 * A * S)
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
=======
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int U, V, A, S;
        cin >> U >> V >> A >> S;

        if (V * V >= U * U - 2 * A * S)
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
>>>>>>> 733bbcd3a99cd9fbcd400057ff2fb9fdcc662564
