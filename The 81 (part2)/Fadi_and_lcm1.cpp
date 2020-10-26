#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,pair<ll,ll>>mp;

void getans(ll n)
{
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
        if(__gcd(i,n/i)==1)     // we can write lcm as product of two int when their gcd=1 beacuse
        {

           mp[(n/i)-i]={i,n/i}; // gcd(a,b)*lcm(a,b)=a*b => 1*lcm(a,b)=a*b . so a and b are the
                                // divisors of lcm(a,b) .So we'll iterate for all divisors of lcm(a,b)
                                // and find the pair whose difference is minimum

        }
        }

    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    getans(n);
    cout<<mp.begin()->second.first<<" "<<mp.begin()->second.second<<"\n";
}
