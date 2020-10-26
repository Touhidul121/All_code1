#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;


ll power(ll a,ll n,ll m)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=(res*a)%m , n--;
        n>>=1;
        a=(a*a)%m;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll a,b,c;
    cin>>a>>b>>c;

    cout<<power(a,power(b,c,mod-1),mod)<<"\n";
    }

}
