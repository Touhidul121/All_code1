#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;
ll dp[100005],k;
ll getans(ll n,ll k)
{
    if(n==0)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    ll x=0;
    if(n>=k)
        x=getans(n-k,k)%mod;
    ll y=0;
        y=getans(n-1,k)%mod;
        return dp[n]=(x+y);
}
int main()
{
    ll t,k,a,b;
    cin>>t>>k;

    for(int i=1;i<=100001;i++)
        dp[i]=-1;

        vector<ll>pref(100005);


    for(int i=1;i<=100001;i++)
    {
        pref[i]=(pref[i-1]+getans(i,k));
    }

    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        cout<<(pref[b]-pref[a-1])%mod<<"\n";
    }
}
