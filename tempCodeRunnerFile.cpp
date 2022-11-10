#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin >> t;
	while(t--)
	{
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
}