#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int a;
    int sum=22;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++)
    {
        set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int x=22-(v[i]+v[j]);
            if(s.find(x)!=s.end())
            {
                cout<<x<<" "<<v[i]<<" "<<v[j]<<"\n";
            }
            else
                s.insert(v[j]);
        }
    }
}
