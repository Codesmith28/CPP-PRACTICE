#include<iostream>
using namespace std;

// sorting of array
void sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// maximum frequency of an element in an array
int maxFreq(int arr[], int n)
{
    int max = 0;
    int count = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    return max;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a, n);
        int m = maxFreq(a, n);
        
        if(m == n)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<n-m<<endl;
        }
    }
    return 0;
}