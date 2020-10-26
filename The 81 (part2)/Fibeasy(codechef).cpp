#include<bits/stdc++.h>
#define ll long long
using namespace std;

int lastdigit[60];

int logBase2(ll n)
{
   int res=0;
   ll fact=1;
   while(fact<<(res+1)<=n)
        res++;
   return res;
}

void init()
{
    ll a=0;
    ll b=1;
    lastdigit[0]=a,lastdigit[1]=b;
    ll c=a+b;
    for(int i=2;i<60;i++)
    {
        lastdigit[i]=c%10;
        a=b;
        b=c;
        c=a+b;
    }
}

int main()
{
    ll t,n,fact=1;
    init();
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=fact<<logBase2(n);
        cout<<lastdigit[(n-1)%60]<<"\n";
        for(int i=0;i<7;i++)
            cout<<lastdigit[i]<<" ";
    }
}
