#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        ll cnt=0;
        x=n;
        while(n)
        {
            n&=(n-1);
            cnt++;
        }

        cout<<(ll)(2*x)-cnt<<"\n";
    }
}
