#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll,pair<ll,ll>>mp;

void check(ll n)
{

    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {


                if(__gcd(i,n/i)==1)
                {
                    mp[(n/i)-i]={i,n/i};

                }

        }
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll n;
   cin>>n;
   check(n);

   cout<<(mp.begin()->second.first)<<" "<<(mp.begin()->second.second)<<"\n";

}
