#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    string a;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
       cin>>a;
       mp[a]++;
    }
    for(auto x:mp)
    {
        if(m<x.second)
            m=x.second;
    }
    for(auto x:mp)
    {
        if(x.second==m)
        {
            cout<<x.first<<endl;
            break;
        }
    }
}
