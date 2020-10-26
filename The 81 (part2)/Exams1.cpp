#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,a,b;
    cin>>n;

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());

    int ans=v[0].second;

    for(int i=0;i<n-1;i++)
    {
        if(ans<=v[i+1].second)
            ans=v[i+1].second;
        else
            ans=v[i+1].first;
    }
    cout<<ans<<"\n";
}
