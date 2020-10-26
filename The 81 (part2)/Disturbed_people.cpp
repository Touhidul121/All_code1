#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int count=0;
    for(int i=0;i<n-2;i++)
    {
     if(v[i]==1&&v[i+1]==0&&v[i+2]==1)
     {
         count++;
         v[i+2]=0;
     }
    }
    cout<<count<<"\n";
}
