#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,l,r;
        cin>>n>>q;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int pre[n+1],suf[n+1];
        pre[0]=0;

        for(int i=1;i<=n;i++)
        {
            pre[i]=__gcd(pre[i-1],a[i]);
        }
        suf[n+1]=0;

        for(int i=n;i>=1;i--)
        {
            suf[i]=__gcd(suf[i+1],a[i]);
        }
        while(q--)
        {
            cin>>l>>r;
            cout<<__gcd(pre[l-1],suf[r+1])<<"\n";
        }
    }
}
