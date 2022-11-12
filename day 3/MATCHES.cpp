#include<iostream>
using namespace std;

int match(int n)
{
    int term;
    if(n==0 || n==6 || n==9)
    {
        term = 6;
    }

    else if(n==2 || n==3 || n==5)
    {
        term = 5;
    }

    else if(n==1)
    {
        term = 2;
    }

    else if(n==4)
    {
        term = 4;
    }

    else if(n==7)
    {
        term = 3;
    }

    else if(n==8)
    {
        term = 7;
    }

    return term;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int n=a+b;
        int sum=0;
        while(n)
        {
            int rem = n%10;
            sum += match(rem);
            n = n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}