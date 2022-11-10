#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;

        bool flag=false;
        if( (w2 >= w1 + x1*M) && (w2 <= w1 +x2*M) )
        {
            flag=true;
        }

        cout<<flag<<endl;

    }
    return 0;
}