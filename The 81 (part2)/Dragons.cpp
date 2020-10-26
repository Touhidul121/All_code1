#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,a,b,x,y;
    cin>>s>>n;

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        x=v[i].first;
        y=v[i].second;

        if(s>x)
        {
            s+=y;
        }
        if(s<x)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
