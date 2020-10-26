#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m;
    cin>>n;

    ll a;
    vector<ll>v1(100005),v2(100005);
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v1[a]=i;
        v2[a]=n-1-i;
    }

    ll cnt_v=0,cnt_p=0;
    cin>>m;
    for(ll i=0;i<m;i++)
    {
       cin>>a;
       cnt_v+=v1[a]+1;
       cnt_p+=v2[a]+1;
    }

    cout<<cnt_v<<" "<<cnt_p<<endl;
}
