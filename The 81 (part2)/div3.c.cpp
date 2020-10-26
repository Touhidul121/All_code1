#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x1=floor(sqrt(n));
        ll x2=ceil(sqrt(n));
        double rem1=n-x1;
        double rem2=n-x2;
        ll step1=ceil(rem1/x1);
        step1+=x1-1;

        ll step2=ceil(rem2/x2);
        step2+=x2-1;
        //cout<<x1<<" "<<x2<<"\n";
        //cout<<rem1<<" "<<rem2<<"\n";
        cout<<min(step1,step2)<<"\n";
    }
}
