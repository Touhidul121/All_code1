#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,res;
    set<int>s;
    for(int i=0;i<=2*n;i++)
        s.insert(i);

        bool f=false;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(a>i+1)
            f=true;
            s.erase(a);
    }
    if(f)
        cout<<-1<<"\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            res.push_back(*s.begin());
            s.erase(*s.begin());
            if(i<n && v[i]!=v[i+1])
                s.insert(v[i]);
        }
        for(auto x:res)
            cout<<x<<" ";
        cout<<"\n";
    }
}
