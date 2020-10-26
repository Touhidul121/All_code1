#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pow1(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
return res;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>v,v1;
        for(int i=0;i<=12;i++)
            v.push_back(pow1(3,i));

        for(int i=1;i<=pow(2,11);i++)
        {
            for(int j=0;j<=12;j++)
            {
                if(i&(1<<j))
                    sum+=v[j];
            }
            v1.push_back(sum);
            sum=0;
        }
        sort(v1.begin(),v1.end());
        int ind;
        ind=lower_bound(v1.begin(),v1.end(),n)-v1.begin();
        cout<<v1[ind]<<"\n";
    }
}
