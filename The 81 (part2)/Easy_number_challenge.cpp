#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
#define mod 1073741824
typedef long long ll;

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;

ll n=a*b*c;
ll cnt[n+5];
memset(cnt,0,sizeof(cnt));

for(ll i=1;i<=n;i++)
    {
        for(ll j=i;j<=n;j+=i){
            cnt[j]++;
        }
    }


    ll sum=0;

    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            for(ll k=1;k<=c;k++)
            {
               sum+=cnt[i*j*k];
               sum=sum%mod;
            }
        }
    }
    cout<<sum<<"\n";
}
