#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,a,sum=0;
    cin>>n;
    multiset<ll>st;
    vector<ll>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
        st.insert(a);
    }
    vector<ll>ans;
    ll x;

    for(int i=0;i<n;i++)
    {
        x=(sum-v[i]);

        if(x%2==0)
        {

            st.erase(st.find(v[i]));
            if(st.find(x/2)!=st.end())
                ans.push_back(i+1);
            st.insert(v[i]);
        }
    }
    cout<<ans.size()<<"\n";
    for(ll x:ans)
        cout<<x<<" ";
}
