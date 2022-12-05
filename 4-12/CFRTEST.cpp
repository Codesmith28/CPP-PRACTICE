#include<iostream>
using namespace std;

// function to find distinct elements of the array
int dis(int arr[],int n)
{
    int i,j,count=1;
    for(i = 1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)
        {
            count++;
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }   

        // elements of array are friends
        // the value of element is the day at which frnd wants grand party
        // total number of elements that does not clash
        // we can return total distinct elements of the array
        cout<<dis(a,n)<<endl;

    }
    return 0;
}