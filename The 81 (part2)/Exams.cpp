#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int best=-1;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(best<=v[i].second)
            best=v[i].second;
        else
            best=v[i].first;
    }
    cout<<best<<'\n';
}
