#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,a,b,k,x;
    cin>>n>>a>>b>>k;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ll r=(x%(a+b));
        if(r==0)r+=(a+b);
        ll val=max(0ll,(ll)ceil(double(r-a)/double(a))); //kono particular monster re prothome ami hit korbo, aita x%(a+b) korar por ja oboshisto thake tar jonneo sotto karon se khetreo ami prothome hit korbo...tai (r-a)/a;
        v.push_back(val);
    }
    sort(v.begin(),v.end());

    ll cnt=0;
    for(int i=0;i<n&&k>=0;i++)
    {
        cnt++;
        k-=v[i];
    }
    cout<<cnt<<"\n";
}
