#include<iostream>
using namespace std;
#include<climits>

/* 
1 1 2 2 2 3 3 3 3 4
 */

int sorted(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {  
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr[n];
}

int maxf(int arr[],int n)
{
    int count =0;
    int maxf = INT_MIN;

    for(int i=0;i<n-1;i++)
    {
            if(arr[i]!=arr[i-1])
            {
                maxf = max(maxf,count);
                count = 0;
            }
        
        for(int j=i+1;j<n;j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
            }
        }

    }


    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        int B[n];
        B[n] = sorted(A,n);
        /* find the largest frequency possible
        subtract it with n */ 

        cout<<maxf(B,n)<<endl;

        // if(n==1)
        // {
        //     cout<<0<<endl;
        // }
    }
}