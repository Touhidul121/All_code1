#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    long long sum=0,sum1=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        sum1+=v[i];
        if(sum1>=(sum+1)/2)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
}
