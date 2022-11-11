#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,K;
        cin>>a>>b>>c>>d>>K;

        int x=(abs(c-a)+abs(d-b));

        if(x == K)
        {
            cout<<"Yes"<<endl;
        }

        else if(x<K && (x-K)%2 == 0)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}