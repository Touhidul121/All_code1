#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll count=0;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count=i;
            break;
        }
    }
    if(count==0)
    {
        cout<<1<<endl;
    }
    else{
        if(n%2!=0)
        {
          n=n-count;
          cout<<1+n/2<<endl;
        }
        else
        cout<<n/count<<endl;
    }
}
