<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin >> t;
	while(t--)
	{
        // if not contiguous from one end then contiguous from other end is valid
        
	    cin >> n;
	    if((n*(n+1)/2)%2!=0)
	    {
	        cout << n-1 << endl;
	    }
	    else
	    {
	        cout << n << endl;
	    }
	}
	return 0;
=======
#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin >> t;
	while(t--)
	{
        // if not contiguous from one end then contiguous from other end is valid
        
	    cin >> n;
	    if((n*(n+1)/2)%2!=0)
	    {
	        cout << n-1 << endl;
	    }
	    else
	    {
	        cout << n << endl;
	    }
	}
	return 0;
>>>>>>> 733bbcd3a99cd9fbcd400057ff2fb9fdcc662564
}