#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1,b=n;
        while(a<b)
        {
            a++;
            b--;
        }
        cout<<a<<endl;
    }
    return 0;
}