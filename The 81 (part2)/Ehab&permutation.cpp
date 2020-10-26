#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    int a;
bool odd=false,even=false;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)
        {
            odd=true;
        }
        else
            even=true;
        v.push_back(a);
    }
    if(odd&&even)
    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
