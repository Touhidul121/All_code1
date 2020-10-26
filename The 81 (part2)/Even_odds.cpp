#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
    if(k<=(n/2))
        cout<<(ll)(2*k-1)<<"\n";
    else
        cout<<(ll)(2*k-n)<<"\n";
    }
    else
    {
        if(k<=(n/2)+1)
               cout<<(ll)(2*k-1)<<"\n";
    else
        cout<<(ll)(2*k-n-1)<<"\n";
    }
}
