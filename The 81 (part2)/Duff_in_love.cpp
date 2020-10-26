#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,ans=1;
    cin>>n;

    map<ll,ll>mp;

    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans*=i;
            while(n%i==0)
            {

                n/=i;
            }

        }
    }
    if(n>1)
    {
        ans*=n;
    }
    cout<<ans<<"\n";
}
