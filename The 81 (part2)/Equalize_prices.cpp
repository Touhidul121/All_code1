#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

  ll n,k;
  cin>>n>>k;

  vector<ll>v;
  for(ll i=0;i<n;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
  ll m,mx;
  m=*min_element(v.begin(),v.end());
  mx=*max_element(v.begin(),v.end());

  if(m+k>=mx-k)
    cout<<m+k<<"\n";
  else
    cout<<"-1"<<"\n";
    }
}
