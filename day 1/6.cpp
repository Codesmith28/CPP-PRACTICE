#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,A,B,C;
        cin>>N>>A>>B>>C;

        if(B>=N && A+C>=N)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}