#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,g,a,s=0;
    cin>>n>>g;


    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
       v.push_back(a);
    }
    sort(v.begin(),v.end());
    s+=v[0];
    long long cnt=0,i=1;
    while(s<=g)
    {
        s=s+v[i];
        cnt++;
        i++;
    }
    cout<<cnt+n-i<<"\n";
}
