#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=(res*a);n--;
        }
        n=n/2;
        a=a*a;
    }
    return res;
}
ll power_value(ll n)
{
    ll i=0;
    ll a=1;
    while(a<=n)
    {
       i++;
       a=power(3ll,i);
    }
    return i-1;
}
int b[64]={};
bool f=false;
void solve(ll n)
{
    while(n>0)
    {
        int t=power_value(n);
        if(b[t])
        { f=true;break;}

        else b[t]=1;

        n-=power(3,t);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        f=false;
        solve(n);

     int ind=0;
     ll ans=0,ans1=0;
    bool f1=false,f2=false;
    int j=0;
    for(int i=63;i>=0;i--)
    {
        if(b[i]>0)
        {

        ans+=power(3,i);

        }
        if(power(3,i)>=n)
            ans1=power(3,i);

    }

    if(ans<n)
    {
        for(int i=0;i<=63;i++)
        {
            if(b[i]==0)
                ans+=power(3,i);
            if(ans>=n)break;
        }
    }

    cout<<min(ans,ans1)<<"\n";
    memset(b,0,sizeof(b));
    }
}
