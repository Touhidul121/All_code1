#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v;

        ll ans=INT_MAX;
        set<ll>st;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            st.insert(a);

        }
        if(st.size()==n)
            cout<<-1<<"\n";
        else
        {
            vector<int>v1(n+1,-1);
            for(ll i=0;i<n;i++)
            {
                if(v1[v[i]]!=-1)
                {
                    ans=min(ans,i-v1[v[i]]+1);

                }
                v1[v[i]]=i;
            }

        cout<<ans<<"\n";
        }


    }
}
