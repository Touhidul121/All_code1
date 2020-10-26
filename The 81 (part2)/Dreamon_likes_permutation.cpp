#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        int mx=*max_element(v.begin(),v.end());
        int l1=mx,l2=n-mx;
        set<int>s1,s2;
        set<pair<int,int>>v1;

        for(int i=0;i<mx;i++)
        {
            if(v[i]<=l1)
            s1.insert(v[i]);
        }
        for(int i=l1;i<n;i++)
        {
            if(v[i]<=l2)
            s2.insert(v[i]);
        }
        if(s1.size()==l1&&s2.size()==l2)
            v1.insert(make_pair(l1,l2));

        s1.clear();
        s2.clear();
        l1=n-mx;
        l2=mx;
        for(int i=0;i<l1;i++)
        {
            if(v[i]<=l1)
            s1.insert(v[i]);
        }
        for(int i=l1;i<n;i++)
        {
            if(v[i]<=l2)
            s2.insert(v[i]);
        }
        if(s1.size()==l1&&s2.size()==l2)
            v1.insert(make_pair(l1,l2));

        if(v1.size()==0)
            cout<<0<<"\n";
        else
        {
            cout<<v1.size()<<"\n";
            for(auto x:v1)
                cout<<x.first<<" "<<x.second<<"\n";

        }
    }
}
