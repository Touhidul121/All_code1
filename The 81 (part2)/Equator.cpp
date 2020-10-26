#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    long long sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
       ans+=v[i];
       if(ans>=(int)ceil(sum)/2.0)
       {
           cout<<i+1<<"\n";
           break;
       }
    }
}
