#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0){
                v[i+1]=-v[i+1];
            }
        }
        for(auto x:v)
            cout<<x<<" ";
        cout<<"\n";

    }
}
