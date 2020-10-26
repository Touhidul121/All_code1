#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);

  ll n,a;
  cin>>n;
  unordered_set<long long>mp;
  ll mx=0,mx1=0;ll x=LLONG_MAX;
  vector<ll>v1;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v1.push_back(a);
      mp.insert(a);

  }
  for(int i=0;i<n;i++)
  {
      if(mp.find(2*v1[i])!=mp.end())
        continue;
      if((v1[i]%3)==0 && mp.find(v1[i]/3)!=mp.end())
        continue;
      mx=v1[i];
      break;
  }
vector<ll>v;

  v.push_back(mx);

  for(int i=2;i<=n;i++)
  {
      if(mp.find(mx*3ll)!=mp.end()){
        v.push_back(mx*3ll);mx=mx*3ll;
      }
      else{
        v.push_back(mx>>1);
        mx=mx>>1;
      }
  }
  reverse(v.begin(),v.end());
  for(ll x:v)
    cout<<x<<" ";
  cout<<"\n";
}
