#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        int count=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                }

                else
                {
                    count = 0;
                }
            }
        }
    }
    return 0;
}