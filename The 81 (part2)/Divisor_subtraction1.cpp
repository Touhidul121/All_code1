#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll count=0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count=i;
            break;
        }
    }
    if(count==0)
        cout<<1<<"\n";
    else
    {
        if(!(n&1))
            cout<<n/2<<endl;//because every even number has 2 as smallest prime divisor
        else
        {
            n=n-count;//count is odd because prime divisor of any odd number is odd(1 step)(now n is even and we will be able to make it zero)
            cout<<1+n/2<<endl;//now n is odd so it's prime divisor is 2
        }
    }
}
