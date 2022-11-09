#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,L,R;
        cin>>D>>L>>R;

        if(D>R && D>L)
        {
            cout<<"Too Late\n";
        }

        else if(D<L)
        {
            cout<<"Too Early\n";
        }

        else
        {
            cout<<"Take second dose now\n";
        }
        
    }
    return 0;
}