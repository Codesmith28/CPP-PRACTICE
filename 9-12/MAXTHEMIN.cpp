#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int maxterm=INT_MIN;
        for(int i=0;i <n; i++)
        {
            maxterm = max(a[i],maxterm);
        }
        int m = 0;
        while(k--)
        {
            a[m] = maxterm;
        }

        int minterm=INT_MAX;
        for(int i=0; i<n; i++)
        {
            minterm = min(a[i],minterm);
        }

        cout<<minterm<<endl;
    }
    return 0;
}